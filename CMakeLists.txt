# ----------------------------------------------------------------------------------------
# Copyright © 2016 LeLe570929726. All rights reserved.
#
# @Project: HetGui
# @License: Licensed under GNU General Public License v3.
# @Craete: 2016/8/30 by LeLe570929726
# ----------------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.4.1)

# Project information
project(HetGui)
set(HetGui_PROJECT_NAME "\"HetGui\"")
set(HetGui_VERSION_MAJOR 1)
set(HetGui_VERSION_MINOR 0)

# Build platform option
option(build_platform_windows "Build HetGui to Windows" OFF)
option(build_platform_linux "Build HetGui to Linux" OFF)
option(build_platform_mac "Build HetGui to Mac OS X" OFF)
option(build_platform_android "Build HetGui to Android" OFF)
option(build_platform_ios "Build HetGui to IOS" OFF)

# Set export flag
option(HETGUI_EXPORT "Export flag" ON)

# Select the build method
if(build_platform_windows)
  # Check host platform
  if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    option(HETGUI_PLATFORM_WINDOWS "Platform flag" ON)
    add_subdirectory("${PROJECT_SOURCE_DIR}/Src/Code")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    message("-- Error: Can't build Windows version on Linux.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Mac OS X")
    message("-- Error: Can't build Windows version on Mac OS X.")
  endif()
elseif(build_platform_linux)
  # Check host platform
  if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    message("-- Error: Can't build Linux version on Windows.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    option(HETGUI_PLATFORM_LINUX "Platform flag" ON)
    add_subdirectory("${PROJECT_SOURCE_DIR}/Src/Code")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Mac OS X")
    message("-- Error: Can't build Linux version on Mac OS X.")
  endif()
elseif(build_platform_mac)
  # Check host platform
  if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    message("-- Error: Can't build Mac OS X version on Windows.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    message("-- Error: Can't build Mac OS X version on Linux.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Mac OS X")
    option(HETGUI_PLATFORM_MACOSX "Platform flag" ON)
    add_subdirectory("${PROJECT_SOURCE_DIR}/Src/Code")
  endif()
elseif(build_platform_android)
  option(HETGUI_PLATFORM_ANDROID "Platform flag" ON)
  # TODO: Build
else()
  # Check host platform
  if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    message("-- Error: Can't build IOS version on Windows.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    message("-- Error: Can't build IOS version on Linux.")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Mac OS X")
    option(HETGUI_PLATFORM_IOS "Platform flag" ON)
    # TODO: Build
  endif()
endif()
