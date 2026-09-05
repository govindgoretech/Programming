@echo off
setlocal EnableDelayedExpansion

cd /d "C:\Users\goreg\OneDrive\Desktop\Programming"

set "LOGFILE=auto_upload.log"
set "MAX_RETRIES=5"
set "RETRY_DELAY=300"

echo ================================================== >> "%LOGFILE%"
echo [%date% %time%] Auto upload started >> "%LOGFILE%"

REM Check for scheduled argument
set "SCHEDULED_RUN=0"

if /I "%~1"=="/scheduled" (
    set "SCHEDULED_RUN=1"
)

REM Random delay ONLY for scheduled run
REM 0 to 30 minutes
if "%SCHEDULED_RUN%"=="1" (
    set /a RANDOM_MINUTES=%RANDOM% %% 31
    set /a WAIT_SECONDS=%RANDOM_MINUTES%*60

    echo Scheduled run detected.
    echo Waiting %RANDOM_MINUTES% minutes before upload...
    echo [%date% %time%] Random delay: %RANDOM_MINUTES% minutes >> "%LOGFILE%"

    timeout /t %WAIT_SECONDS% /nobreak >nul
)

REM Detect changes
git add -A

git diff --cached --quiet
if %errorlevel%==0 (
    echo No new changes to upload.
    echo [%date% %time%] No new changes to upload. >> "%LOGFILE%"
    exit /b 0
)

echo Changes detected.
echo [%date% %time%] Changes detected. >> "%LOGFILE%"

REM Commit
git commit -m "Automatic daily update"

if errorlevel 1 (
    echo Commit failed.
    echo [%date% %time%] ERROR - Commit failed. >> "%LOGFILE%"
    exit /b 1
)

echo Commit created.
echo [%date% %time%] Commit created. >> "%LOGFILE%"

REM Push with retry
set /a ATTEMPT=1

:RETRY

echo Push attempt !ATTEMPT! of %MAX_RETRIES%...
echo [%date% %time%] Push attempt !ATTEMPT! of %MAX_RETRIES% >> "%LOGFILE%"

git push origin main

if not errorlevel 1 (
    echo.
    echo ==========================================
    echo SUCCESS - GitHub upload completed.
    echo ==========================================

    echo [%date% %time%] SUCCESS - GitHub upload completed. >> "%LOGFILE%"

    REM Shutdown ONLY when /scheduled is used
    if "%SCHEDULED_RUN%"=="1" (
        echo.
        echo Upload successful.
        echo Laptop will shutdown in 60 seconds.
        echo Press CTRL+C to cancel shutdown.

        echo [%date% %time%] Shutdown scheduled. >> "%LOGFILE%"

        shutdown /s /t 60 /c "GitHub automatic upload completed."
    )

    exit /b 0
)

echo Push failed. Internet may be unavailable.
echo [%date% %time%] Push failed. >> "%LOGFILE%"

if !ATTEMPT! GEQ %MAX_RETRIES% (
    echo.
    echo FAILED - All retry attempts exhausted.
    echo [%date% %time%] FAILED - All retry attempts exhausted. >> "%LOGFILE%"
    exit /b 1
)

echo Waiting 5 minutes before retry...
timeout /t %RETRY_DELAY% /nobreak >nul

set /a ATTEMPT+=1
goto RETRY