@echo off
setlocal
pushd .
cd /d %~dp0
call :MAIN %*
popd
if "%ERRORLEVEL%" equ "0" exit /b
::echo.Error:%ERRORLEVEL%
set TTL='‚½‚¢‚Ö‚ñ‚¾'
set MSG='ƒGƒ‰[‚ªo‚Ä‚é‚æ'
powershell "if((New-Object -com WScript.Shell).Popup(%MSG%,0,%TTL%,1) -ne 1){throw;};" >nul
exit /b

:MAIN
if "%1" == "help" goto :HELP
if "%1" == "vssu" goto :VSSU
if "%1" == "vs" goto :VS
if "%1" == "" goto :VS
echo.Illigal Command "%1"
exit /b 1

:HELP
endlocal
echo.[usage] zzz.bat [vs|vssu|help]
echo.help  ... this message
exit /b 0

:VS
start "" /b "%CD%\vs.sln"
exit /b

:VSSU
powershell start-process cmd -ArgumentList '/c start "" /b "%CD%/vs.sln"' -verb runas
exit /b
