@echo off

REM Calculating correct current folder
SET modpath=%~dp0
SET modpath=%modpath:~0,-1%

REM Remove old drive mapping
subst p: /d > nul

REM Mount current folder
subst p: "%modpath%"

REM Lookup DSSignFile folder from registry
for /F "Tokens=2* skip=2" %%A In ('REG QUERY "HKCU\SOFTWARE\Bohemia Interactive\dssignfile" /v "path" 2^>nul') do (set DSSIGNFILEPATH=%%B)
if not defined DSSIGNFILEPATH echo "Arma 3 Tools does not seem to be installed, signing will be disabled"

REM Build pbo files using pboproject and check for errors
REM pboproject +Clean -Engine=Arma3 -Key -Noisy -P +Mod="%modpath%\@zsn_loadouts" -Z P:\addons
REM if %errorlevel% neq 0 (
REM 	type "temp\*.log"
REM 	exit /b 1
REM )

if defined DSSIGNFILEPATH (
	mkdir @zsn_loadouts\Keys > nul 2> nul

	for %%k in (Keys\*.biprivatekey) do (
		for %%f in (@zsn_loadouts\Addons\*.pbo) do (
			echo Signing @zsn_loadouts\Addons\%%~nxf with %%~nxk
			"%DSSIGNFILEPATH%\DSSignFile.exe" "%%k" "@zsn_loadouts\Addons\%%~nxf"
		)
	)

	for %%k in (Keys\*.bikey) do (
		echo Copying %%~nxk to @zsn_loadouts\Keys
		copy "%%k" "@zsn_loadouts\Keys" > nul
	)
)

REM Remove drive mapping
subst p: /d