@echo off
setlocal EnableDelayedExpansion

cd /d "C:\Users\goreg\OneDrive\Desktop\Programming"

set "LOGFILE=auto_upload.log"
set "MAX_RETRIES=5"
set "RETRY_DELAY=300"

echo ================================================== >> "%LOGFILE%"
echo [%date% %time%] Auto upload started >> "%LOGFILE%"

git add -A

git diff --cached --quiet
if %errorlevel%==0 (
    echo [%date% %time%] No new changes to upload. >> "%LOGFILE%"
    echo No new changes to upload.
    exit /b 0
)

echo [%date% %time%] Changes detected. >> "%LOGFILE%"
echo Changes detected.

git commit -m "Automatic daily update"

if errorlevel 1 (
    echo [%date% %time%] Commit failed. >> "%LOGFILE%"
    echo Commit failed.
    exit /b 1
)

echo [%date% %time%] Commit created. >> "%LOGFILE%"
echo Commit created.

set /a ATTEMPT=1

:RETRY

echo [%date% %time%] Push attempt !ATTEMPT! of %MAX_RETRIES%... >> "%LOGFILE%"
echo Push attempt !ATTEMPT! of %MAX_RETRIES%...

git push origin main

if not errorlevel 1 (
    echo [%date% %time%] SUCCESS - Push completed. >> "%LOGFILE%"
    echo SUCCESS - GitHub upload completed.
    exit /b 0
)

echo [%date% %time%] Push failed. Internet may be unavailable. >> "%LOGFILE%"
echo Push failed. Internet may be unavailable.

if !ATTEMPT! GEQ %MAX_RETRIES% (
    echo [%date% %time%] FAILED - All retry attempts exhausted. >> "%LOGFILE%"
    echo FAILED - All retry attempts exhausted.
    exit /b 1
)

echo Waiting 5 minutes before retry... >> "%LOGFILE%"
echo Waiting 5 minutes before retry...

timeout /t %RETRY_DELAY% /nobreak >nul

set /a ATTEMPT+=1
goto RETRY