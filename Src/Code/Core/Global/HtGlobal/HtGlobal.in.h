// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/3 by LeLe570929726
// ----------------------------------------------------------------------------------------

// Platform flag
#cmakedefine HETGUI_PLATFORM_WINDOWS
#cmakedefine HETGUI_PLATFORM_LINUX
#cmakedefine HETGUI_PLATFORM_MACOSX
#cmakedefine HETGUI_PLATFORM_ANDROID
#cmakedefine HETGUI_PLATFORM_IOS

// Set project name
#define HETGUI_PROJECT_NAME @HetGui_PROJECT_NAME@

// Set project version
#define HETGUI_PROJECT_VERSION_MAJOR @HetGui_VERSION_MAJOR@
#define HETGUI_PROJECT_VERSION_MINOR @HetGui_VERSION_MINOR@

// Set export flag
#cmakedefine HETGUI_EXPORT
#ifdef HETGUI_EXPORT
  #define HETGUI_CLASS __declspec(dllexport)
#else
  #define HETGUI_CLASS __declspec(dllimport)
#endif
