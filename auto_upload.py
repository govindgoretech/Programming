import ctypes
import email
import imaplib
import os
import smtplib
import subprocess
import sys
import time
from datetime import datetime, timedelta
from email import policy
from email.header import decode_header
from email.message import EmailMessage
from pathlib import Path
from ctypes import wintypes

PROJECT_DIR = Path(r"C:\Users\goreg\OneDrive\Desktop\Programming")
UPLOAD_DIR = PROJECT_DIR / "EmailUploads"
LOG_FILE = PROJECT_DIR / "auto_upload.log"
BRANCH = "main"
MAX_PUSH_RETRIES = 3
RETRY_DELAY = 60
MAX_FILE_BYTES = 10 * 1024 * 1024
MAX_EMAIL_BYTES = 25 * 1024 * 1024
ALLOWED_EXTENSIONS = {
    ".py", ".c", ".h", ".cpp", ".hpp", ".java", ".txt", ".md",
    ".html", ".css", ".js", ".json", ".csv", ".sql", ".xml", ".yml", ".yaml"
}
BLOCKED_NAMES = {
    "auto_upload.py", "auto_upload.log", "auto_upload.bat",
    ".gitignore", ".env"
}

kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
kernel32.CreateWaitableTimerW.restype = wintypes.HANDLE
kernel32.CreateWaitableTimerW.argtypes = [wintypes.LPVOID, wintypes.BOOL, wintypes.LPCWSTR]
kernel32.SetWaitableTimer.restype = wintypes.BOOL
kernel32.SetWaitableTimer.argtypes = [
    wintypes.HANDLE, ctypes.POINTER(ctypes.c_longlong), wintypes.LONG,
    wintypes.LPVOID, wintypes.LPVOID, wintypes.BOOL
]
kernel32.WaitForSingleObject.restype = wintypes.DWORD
kernel32.WaitForSingleObject.argtypes = [wintypes.HANDLE, wintypes.DWORD]
kernel32.CloseHandle.argtypes = [wintypes.HANDLE]


def log(message):
    line = f"[{datetime.now():%Y-%m-%d %H:%M:%S}] {message}"
    print(line, flush=True)
    try:
        LOG_FILE.parent.mkdir(parents=True, exist_ok=True)
        with LOG_FILE.open("a", encoding="utf-8") as f:
            f.write(line + "\n")
    except OSError:
        pass


def config():
    address = os.getenv("GMAIL_ADDRESS", "goregovind566@gmail.com").strip()
    recipient = os.getenv("GMAIL_TO", "goregovind566@gmail.com").strip()
    password = os.getenv("GMAIL_APP_PASSWORD", "ccyn kfhw awto izzr").replace(" ", "").strip()
    sender = os.getenv("GMAIL_ALLOWED_SENDER", address).strip().lower()
    missing = [k for k, v in {
        "GMAIL_ADDRESS": address, "GMAIL_TO": recipient,
        "GMAIL_APP_PASSWORD": password, "GMAIL_ALLOWED_SENDER": sender
    }.items() if not v]
    if missing:
        raise RuntimeError("Missing environment variable(s): " + ", ".join(missing))
    return address, recipient, password, sender


def send_email(subject, body):
    try:
        address, recipient, password, _ = config()
        msg = EmailMessage()
        msg["Subject"], msg["From"], msg["To"] = subject, address, recipient
        msg.set_content(body)
        with smtplib.SMTP_SSL("smtp.gmail.com", 465, timeout=30) as smtp:
            smtp.login(address, password)
            smtp.send_message(msg)
        log("Email sent: " + subject)
        return True
    except Exception as exc:
        log(f"EMAIL ERROR: {exc}")
        return False


def run_git(args):
    return subprocess.run(
        ["git", *args], cwd=str(PROJECT_DIR), text=True,
        capture_output=True, timeout=180
    )


def decode_mime(value):
    result = []
    for chunk, enc in decode_header(value or ""):
        result.append(chunk.decode(enc or "utf-8", errors="replace")
                      if isinstance(chunk, bytes) else chunk)
    return "".join(result)


def safe_filename(raw):
    name = (raw or "").replace("\\", "/").split("/")[-1].strip()
    if not name or name.startswith(".") or ":" in name or any(ord(c) < 32 for c in name):
        return None
    if name.lower() in BLOCKED_NAMES or Path(name).suffix.lower() not in ALLOWED_EXTENSIONS:
        return None
    return name


def wait_until_time():
    while True:
        try:
            value = input("Run time (HH:MM, 24-hour format): ").strip()
            t = datetime.strptime(value, "%H:%M").time()
            break
        except ValueError:
            print("Invalid time. Example: 22:30")
    now = datetime.now()
    target = datetime.combine(now.date(), t)
    if target <= now:
        target += timedelta(days=1)
    seconds = max(1, int((target - now).total_seconds()))
    log(f"Target time: {target:%Y-%m-%d %H:%M}")
    handle = kernel32.CreateWaitableTimerW(None, True, None)
    if not handle:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        due = ctypes.c_longlong(-seconds * 10_000_000)
        if not kernel32.SetWaitableTimer(handle, ctypes.byref(due), 0, None, None, True):
            raise ctypes.WinError(ctypes.get_last_error())
        log("Timer set. Keep this Python process running. Wake support depends on Windows/firmware/power settings.")
        if kernel32.WaitForSingleObject(handle, 0xFFFFFFFF) != 0:
            raise RuntimeError("Wake timer wait failed.")
    finally:
        kernel32.CloseHandle(handle)


def get_commands_and_save_attachments():
    address, _, password, allowed_sender = config()
    UPLOAD_DIR.mkdir(parents=True, exist_ok=True)
    commands, saved = [], []
    total_bytes = 0
    with imaplib.IMAP4_SSL("imap.gmail.com", 993, timeout=30) as imap:
        imap.login(address, password)
        status, _ = imap.select("INBOX")
        if status != "OK":
            raise RuntimeError("Cannot open INBOX. Check Gmail IMAP settings.")
        safe_sender = allowed_sender.replace("\\", "").replace('"', "")
        status, data = imap.search(None, "UNSEEN", "FROM", f'"{safe_sender}"')
        if status != "OK":
            raise RuntimeError("Gmail IMAP search failed.")
        ids = data[0].split() if data and data[0] else []
        for msg_id in ids:
            status, fetched = imap.fetch(msg_id, "(RFC822)")
            if status != "OK":
                continue
            raw = next((x[1] for x in fetched if isinstance(x, tuple)), None)
            if not raw:
                continue
            msg = email.message_from_bytes(raw, policy=policy.default)
            from_addr = email.utils.parseaddr(msg.get("From", ""))[1].lower()
            subject = decode_mime(msg.get("Subject", ""))
            if from_addr != allowed_sender or not subject.upper().startswith("UPLOAD:"):
                continue
            commit_msg = subject.split(":", 1)[1].strip() or "Email upload"
            commands.append(commit_msg)
            for part in msg.iter_attachments():
                raw_name = decode_mime(part.get_filename() or "")
                filename = safe_filename(raw_name)
                if not filename:
                    if raw_name:
                        log(f"Skipped blocked attachment: {raw_name}")
                    continue
                payload = part.get_payload(decode=True)
                if payload is None:
                    continue
                if len(payload) > MAX_FILE_BYTES:
                    log(f"Skipped file over 10 MB: {filename}")
                    continue
                total_bytes += len(payload)
                if total_bytes > MAX_EMAIL_BYTES:
                    raise RuntimeError("Attachments exceed 25 MB total.")
                dest = UPLOAD_DIR / filename
                i = 1
                while dest.exists():
                    dest = UPLOAD_DIR / f"{Path(filename).stem}_{i}{Path(filename).suffix}"
                    i += 1
                dest.write_bytes(payload)
                saved.append(str(dest.relative_to(PROJECT_DIR)))
                log(f"Saved attachment: {dest.name}")
            imap.store(msg_id, "+FLAGS", "\\Seen")
    return commands, saved


def main():
    if os.name != "nt":
        print("Windows only.")
        return 1
    if not PROJECT_DIR.is_dir():
        print(f"Project folder not found: {PROJECT_DIR}")
        return 1
    try:
        config()
        wait_until_time()
        messages, files = get_commands_and_save_attachments()
        if not messages:
            log("No unread UPLOAD: command emails found.")
            send_email("GitHub Auto Upload: No Command", 
                       "No unread email with subject UPLOAD: was found from the allowed sender. No commit/push performed; laptop remains on.")
            return 0

        add = run_git(["add", "-A"])
        if add.returncode:
            raise RuntimeError("git add failed: " + add.stderr.strip())

        diff = run_git(["diff", "--cached", "--quiet"])
        if diff.returncode == 0:
            log("No changes to commit.")
            send_email("GitHub Auto Upload: No Changes",
                       "Command email received, but there are no staged changes. No commit/push performed; laptop remains on.")
            return 0
        if diff.returncode != 1:
            raise RuntimeError("git diff failed: " + diff.stderr.strip())

        commit_message = " | ".join(messages)[:200]
        commit = run_git(["commit", "-m", commit_message])
        if commit.returncode:
            raise RuntimeError("git commit failed: " + commit.stderr.strip())

        for attempt in range(1, MAX_PUSH_RETRIES + 1):
            log(f"Push attempt {attempt}/{MAX_PUSH_RETRIES}")
            push = run_git(["push", "origin", BRANCH])
            if push.returncode == 0:
                send_email(
                    "GitHub Auto Upload SUCCESS",
                    f"Upload successful.\nBranch: {BRANCH}\nCommit: {commit_message}\n"
                    f"Files: {', '.join(files) if files else 'No email attachments'}\n"
                    f"Time: {datetime.now()}\nLaptop shutdown in 60 seconds."
                )
                log("Push succeeded; shutdown scheduled.")
                subprocess.run(["shutdown", "/s", "/t", "60",
                                "/c", "GitHub auto upload completed successfully."], check=True)
                return 0
            log(push.stderr.strip() or "Push failed.")
            if attempt < MAX_PUSH_RETRIES:
                time.sleep(RETRY_DELAY)
        raise RuntimeError("All GitHub push attempts failed.")

    except Exception as exc:
        log("ERROR: " + str(exc))
        send_email("GitHub Auto Upload FAILED",
                   f"Upload failed at {datetime.now()}.\nReason: {exc}\nLaptop has NOT been shut down. Check auto_upload.log.")
        return 1


if __name__ == "__main__":
    sys.exit(main())
