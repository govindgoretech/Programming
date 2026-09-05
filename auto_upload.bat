@echo off

cd /d "C:\Users\goreg\OneDrive\Desktop\Programming"

git add -A

git diff --cached --quiet
if %errorlevel%==0 (
    echo No new changes to upload.
    exit /b 0
)

git commit -m "Automatic daily update"
git push origin main

echo.
echo Upload completed.
pause