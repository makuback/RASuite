@echo off

REM git describe --tags --long > LiveTag.txt
git describe --tags --match "RAGens.*" > LiveTag.txt
@set /p ACTIVE_TAG=<LiveTag.txt
@set VERSION_NUM=%ACTIVE_TAG:~7,3%

git diff HEAD > Diffs.txt
@set /p RAW_DIFFS_FOUND=<Diffs.txt

setlocal
REM set file=
@for /F "usebackq" %%A in ('"Diffs.txt"') do set DIFF_FILE_SIZE=%%~zA
@if %DIFF_FILE_SIZE% GTR 0 set ACTIVE_TAG=Unstaged Changes

@echo Tag: %ACTIVE_TAG% (%VERSION_NUM%)
@echo #define RAGENS_VERSION "0.%VERSION_NUM%" > ../common/src/BuildVer.h