# ============================================================
# Copyright © 2016 LeLe570929726. All rights reserved.
#
# @Project: HetGui
# @Description: A Gui framework base OpenGL and Qt.
# @License: HetGui project is open-source. And it follows
#           GNU Lesser General Public License v3. You can modify and distribute
#           freely as long as you follow the license.
#
# @Create: 2016/4/30 by LeLe570929726
# ============================================================

# Target setting
TEMPLATE = lib
TARGET = HetGui

# Qt setting
QT += core gui
QT += widgets
QT += opengl

# Defines
DEFINES += HETGUI_LIBRARY

# Src
# Headers
HEADERS += Src/Code/Global/HtClass/HtClass.h
HEADERS += Src/Code/Event/HtObject/HtObject.h
HEADERS += Src/Code/Event/HtEventObject/HtEventObject.h
HEADERS += Src/Code/Event/HtEventReceiverData/HtEventReceiverData.h
HEADERS += Src/Code/Event/HtEventData/HtEventData.h
# Sources
SOURCES += Src/Code/Event/HtObject/HtObject.cpp
SOURCES += Src/Code/Event/HtEventObject/HtEventObject.cpp
SOURCES += Src/Code/Event/HtEventReceiverData/HtEventReceiverData.cpp
SOURCES += Src/Code/Event/HtEventData/HtEventData.cpp
