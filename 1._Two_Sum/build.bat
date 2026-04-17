@echo off
g++ -std=c++17 -O2 -Wall main.cpp -o main.exe
if %errorlevel% neq 0 (
    echo Build failed
    exit /b %errorlevel%
)
echo Build success