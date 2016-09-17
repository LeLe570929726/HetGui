// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/3 by LeLe570929726
// ----------------------------------------------------------------------------------------

// Platform flag
#define HETGUI_PLATFORM_WINDOWS
/* #undef HETGUI_PLATFORM_LINUX */
/* #undef HETGUI_PLATFORM_MACOSX */
/* #undef HETGUI_PLATFORM_ANDROID */
/* #undef HETGUI_PLATFORM_IOS */

// Set project name
#define HETGUI_PROJECT_NAME "HetGui"

// Set project version
#define HETGUI_PROJECT_VERSION_MAJOR 1
#define HETGUI_PROJECT_VERSION_MINOR 0

// Set export flag
#define HETGUI_EXPORT
#ifdef HETGUI_EXPORT
  #define HETGUI_CLASS __declspec(dllexport)
#else
  #define HETGUI_CLASS __declspec(dllimport)
#endif
