:: ----------------------------------------------------------------------------------------
:: Copyright © 2016 LeLe570929726. All rights reserved.
::
:: @Project: HetGui
:: @License: Licensed under GNU General Public License v3.
:: @Craete: 2016/9/3 by LeLe570929726
:: ----------------------------------------------------------------------------------------

:: Close display
@echo off

:: Print welcome text
echo ---------------------------------------------------------------------------------------
echo  Welcome to build HetGui
echo.
echo  Copyright (c) 2016 LeLe570929726. All rights reserved.
echo.
echo  Licensed under GNU General Public License v3.
echo ---------------------------------------------------------------------------------------
echo.
echo.

:: Enter the build path
echo -- Initialization Begin
cd Build
echo -- Initialization End
echo.
echo.

:: Get build platform
echo -- Get Build Option Begin
:get_build_platform
set /p platform=-- Please enter the build platform(1: Windows, 2: Android):
if %platform% NEQ 1 (
  if %platform% NEQ 2 (
    echo -- Error: Please enter a correct platform, you enter %platform%, only can enter 1, 2.
    goto get_build_platform
  )
)
echo -- Set build platform successful
if %platform% == 1 (
  echo -- Get Build Option End
  echo.
  echo.
  goto window_build
)
if %platform% == 2 (
  :: TODO: Get android build option
  echo -- Get Build Option End
  echo.
  echo.
  goto android_build
)
echo -- Get Build Option End
echo.
echo.

:: Build windows version
:window_build
echo -- Build Begin
cmake -Dbuild_platform_windows=ON ..
echo -- Build End
echo.
echo.
goto end_build

:: Build android version
:android_build
echo -- Build Begin
:: TODO: Android build
echo -- Build End
echo.
echo.
goto end_build

:: End
:end_build
pause
