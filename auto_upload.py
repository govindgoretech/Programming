
import os
import sys
import time
import ctypes
import subprocess
import smtplib
from pathlib import Path
from datetime import datetime, timedelta
from email.message import EmailMessage
from ctypes import wintypes

# --------------------------------------------------
# CONFIGURATION
# --------------------------------------------------
PROJECT_DIR = Path(
    r"C:\Users\goreg\OneDrive\Desktop\Programming"
)
LOG_FILE = PROJECT_DIR / "auto_upload.log"

REPO_BRANCH = "main"
MAX_RETRIES = 5
RETRY_DELAY = 300  # 5 minutes

# Windows API for wake timer
kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)

kernel32.CreateWaitableTimerW.restype = wintypes.HANDLE
kernel32.CreateWaitableTimerW.argtypes = [
    wintypes.LPVOID, wintypes.BOOL, wintypes.LPCWSTR
]

kernel32.SetWaitableTimer.restype = wintypes.BOOL
kernel32.SetWaitableTimer.argtypes = [
    wintypes.HANDLE,
    ctypes.POINTER(ctypes.c_longlong),
    wintypes.LONG,
    wintypes.LPVOID,
    wintypes.LPVOID,
    wintypes.BOOL
]

kernel32.WaitForSingleObject.restype = wintypes.DWORD
kernel32.WaitForSingleObject.argtypes = [
    wintypes.HANDLE, wintypes.DWORD
]

kernel32.CloseHandle.argtypes = [wintypes.HANDLE]


def log(message):
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    line = f"[{timestamp}] {message}"
    print(line, flush=True)

    with LOG_FILE.open("a", encoding="utf-8") as file:
        file.write(line + "\n")


def send_email(subject, body):
    """Send Gmail notification using an App Password."""
    sender = os.getenv("goregovind566@gmail.com")
    recipient = os.getenv("goregovind566@gmail.com")
    password = os.getenv("ccyn kfhw awto izzr")

    if not sender or not recipient or not password:
        log("ERROR: Gmail environment variables are missing.")
        return False

    message = EmailMessage()
    message["Subject"] = subject
    message["From"] = sender
    message["To"] = recipient
    message.set_content(body)

    try:
        with smtplib.SMTP_SSL(
            "smtp.gmail.com", 465, timeout=30
        ) as smtp:
            smtp.login(sender, password)
            smtp.send_message(message)

        log("Email notification sent.")
        return True

    except Exception as exc:
        log(f"Email notification failed: {exc}")
        return False


def run_git(args):
    return subprocess.run(
        ["git", *args],
        cwd=PROJECT_DIR,
        text=True,
        capture_output=True,
        timeout=180
    )


def notify_failure(reason):
    log(f"UPLOAD FAILED: {reason}")

    send_email(
        "GitHub Auto Upload FAILED",
        f"""GitHub auto upload failed.

Project: {PROJECT_DIR}
Branch: {REPO_BRANCH}
Time: {datetime.now()}
Reason: {reason}

Laptop has NOT been shut down.
Check auto_upload.log for details.
"""
    )


def wait_until_time():
    """Set a Windows wake-capable timer for the next HH:MM."""
    while True:
        value = input(
            "Upload time (HH:MM, 24-hour format): "
        ).strip()

        try:
            target_time = datetime.strptime(
                value, "%H:%M"
            ).time()
            break
        except ValueError:
            print("Invalid time. Example: 22:30")

    now = datetime.now()
    target = datetime.combine(now.date(), target_time)

    if target <= now:
        target += timedelta(days=1)

    seconds = max(1, int((target - now).total_seconds()))

    log(f"Scheduled for: {target}")
    log("Setting Windows wake timer.")

    handle = kernel32.CreateWaitableTimerW(
        None, True, None
    )

    if not handle:
        raise ctypes.WinError(ctypes.get_last_error())

    try:
        # Negative value means a relative time in 100-ns units.
        due_time = ctypes.c_longlong(
            -seconds * 10_000_000
        )

        ok = kernel32.SetWaitableTimer(
            handle,
            ctypes.byref(due_time),
            0,
            None,
            None,
            True
        )

        if not ok:
            raise ctypes.WinError(ctypes.get_last_error())

        log(
            "Timer is active. Keep this script running; "
            "do not close its terminal."
        )

        result = kernel32.WaitForSingleObject(
            handle, 0xFFFFFFFF
        )

        if result != 0:
            raise RuntimeError(
                f"Wake timer wait returned: {result}"
            )

        log("Timer signalled. Starting upload.")

    finally:
        kernel32.CloseHandle(handle)


def shutdown_laptop():
    log("Upload successful. Shutdown in 60 seconds.")

    subprocess.run([
        "shutdown", "/s", "/t", "60",
        "/c", "GitHub auto upload completed successfully."
    ], check=True)


def main():
    if os.name != "nt":
        print("This script requires Windows.")
        return 1

    if not PROJECT_DIR.is_dir():
        print(f"Project folder not found: {PROJECT_DIR}")
        return 1

    if not all(os.getenv(key) for key in (
        "GMAIL_ADDRESS",
        "GMAIL_TO",
        "GMAIL_APP_PASSWORD"
    )):
        print(
            "Set GMAIL_ADDRESS, GMAIL_TO and "
            "GMAIL_APP_PASSWORD before running."
        )
        return 1

    try:
        commit_message = input(
            "Commit message (Enter = Repository update): "
        ).strip() or "Repository update"

        wait_until_time()

        # Stage files
        result = run_git(["add", "-A"])

        if result.returncode != 0:
            notify_failure(
                result.stderr.strip() or "git add failed"
            )
            return 1

        # Check staged changes
        result = run_git(["diff", "--cached", "--quiet"])

        if result.returncode == 0:
            log("No new changes to upload.")
            send_email(
                "GitHub Auto Upload: No Changes",
                "No new staged changes were found. "
                "No push was required. Laptop remains on."
            )
            return 0

        if result.returncode != 1:
            notify_failure(
                result.stderr.strip() or
                "Could not check staged changes"
            )
            return 1

        # Commit
        result = run_git([
            "commit", "-m", commit_message
        ])

        if result.returncode != 0:
            notify_failure(
                result.stderr.strip() or
                result.stdout.strip() or "Git commit failed"
            )
            return 1

        log(result.stdout.strip())

        # Push with retry
        for attempt in range(1, MAX_RETRIES + 1):
            log(f"Push attempt {attempt}/{MAX_RETRIES}")

            result = run_git([
                "push", "origin", REPO_BRANCH
            ])

            if result.returncode == 0:
                log("GitHub push successful.")

                email_sent = send_email(
                    "GitHub Auto Upload SUCCESS",
                    f"""GitHub auto upload completed successfully.

Repository: Programming
Branch: {REPO_BRANCH}
Time: {datetime.now()}
Commit: {commit_message}

Laptop will shut down in 60 seconds.
"""
                )

                if not email_sent:
                    log(
                        "WARNING: Upload succeeded, but email "
                        "could not be confirmed."
                    )

                shutdown_laptop()
                return 0

            log(result.stderr.strip() or "Push failed.")

            if attempt < MAX_RETRIES:
                log("Retrying in 5 minutes.")
                time.sleep(RETRY_DELAY)

        notify_failure(
            "All GitHub push attempts failed. "
            "Check the log for Git error details."
        )
        return 1

    except Exception as exc:
        notify_failure(str(exc))
        return 1


if __name__ == "__main__":
    sys.exit(main())
