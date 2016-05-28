// ============================================================
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @Description: A Gui framework base OpenGL and Qt.
// @License: HetGui project is open-source. And it follows
//           GNU Lesser General Public License v3. You can modify and distribute
//           freely as long as you follow the license.
//
// @Create: 2016/4/30 by LeLe570929726
// ============================================================

#ifndef HETGUI_GLOBAL_HTCLASS_H
#define HETGUI_GLOBAL_HTCLASS_H

#include <QtGlobal>

// Set export setting
#if defined(HETGUI_LIBRARY)
  #define HETGUI_CLASS Q_DECL_EXPORT
#else
  // Visual Studio dev
  #define HETGUI_CLASS
  // Compile
  // #define HETGUI_CLASS Q_DECL_IMPORT
#endif

#endif            // HETGUI_GLOBAL_HTCLASS_H
