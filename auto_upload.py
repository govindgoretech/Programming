import os
import sys
import time
import random
import subprocess
from datetime import datetime
from pathlib import Path

# --------------------------------------------------
# Programming folder
# --------------------------------------------------
PROJECT_DIR = Path(r"C:\Users\goreg\OneDrive\Desktop\Programming")
LOG_FILE = PROJECT_DIR / "auto_upload.log"

MAX_RETRIES = 5
RETRY_DELAY = 300  # 5 minutes


def log(message):
    """Write message to console and log file."""
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    line = f"[{timestamp}] {message}"
    print(line)

    with LOG_FILE.open("a", encoding="utf-8") as file:
        file.write(line + "\n")


def run_git(args):
    """Run a git command inside the Programming folder."""
    return subprocess.run(
        ["git", *args],
        cwd=PROJECT_DIR,
        text=True,
        capture_output=True
    )


def is_scheduled_run():
    """Scheduled Task will start this script with /scheduled."""
    return len(sys.argv) > 1 and sys.argv[1].lower() == "/scheduled"


def shutdown_laptop():
    """Schedule Windows shutdown after 60 seconds."""
    log("GitHub upload successful. Shutdown scheduled in 60 seconds.")
    subprocess.run(
        ["shutdown", "/s", "/t", "60",
         "/c", "GitHub automatic upload completed."]
    )


def main():
    scheduled = is_scheduled_run()

    log("=" * 50)
    log("Auto upload started.")

    # --------------------------------------------------
    # Random delay ONLY for scheduled run
    # 0 to 30 minutes
    # --------------------------------------------------
    if scheduled:
        random_minutes = random.randint(0, 30)
        log(f"Scheduled run detected. Waiting {random_minutes} minutes.")

        time.sleep(random_minutes * 60)

    # --------------------------------------------------
    # Git add
    # --------------------------------------------------
    result = run_git(["add", "-A"])

    if result.returncode != 0:
        log("ERROR - git add failed.")
        log(result.stderr.strip())
        return 1

    # --------------------------------------------------
    # Check staged changes
    # --------------------------------------------------
    result = run_git(["diff", "--cached", "--quiet"])

    if result.returncode == 0:
        log("No new changes to upload.")
        return 0

    # --------------------------------------------------
    # Commit
    # --------------------------------------------------
    log("Changes detected.")

    result = run_git(
        ["commit", "-m", "Automatic daily update"]
    )

    if result.returncode != 0:
        log("ERROR - Commit failed.")
        log(result.stdout.strip())
        log(result.stderr.strip())
        return 1

    log("Commit created.")

    # --------------------------------------------------
    # Push with retry
    # --------------------------------------------------
    for attempt in range(1, MAX_RETRIES + 1):
        log(f"Push attempt {attempt} of {MAX_RETRIES}...")

        result = run_git(["push", "origin", "main"])

        if result.returncode == 0:
            log("SUCCESS - GitHub upload completed.")

            # Shutdown ONLY for scheduled run
            if scheduled:
                shutdown_laptop()

            return 0

        log("Push failed. Internet may be unavailable.")

        if attempt < MAX_RETRIES:
            log("Waiting 5 minutes before retry...")
            time.sleep(RETRY_DELAY)

    log("FAILED - All retry attempts exhausted.")
    return 1


if __name__ == "__main__":
    os.chdir(PROJECT_DIR)
    sys.exit(main())
