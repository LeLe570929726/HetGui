# ----------------------------------------------------------------------------------------
# Copyright © 2016 LeLe570929726. All rights reserved.
#
# @Project: HetGui
# @License: Licensed under GNU General Public License v3.
# @Craete: 2016/9/3 by LeLe570929726
# ----------------------------------------------------------------------------------------

# Global util
configure_file("${PROJECT_SOURCE_DIR}/Src/Code/Core/Global/HtGlobal/HtGlobal.in.h" "${PROJECT_SOURCE_DIR}/Src/Code/Core/Global/HtGlobal/HtGlobal.h")
set(HETGUI_SRC_CODE_CORE_HEADER ${HETGUI_SRC_CODE_CORE_HEADER} "${PROJECT_SOURCE_DIR}/Src/Code/Core/Global/HtGlobal/HtGlobal.h")

# STL util
set(HETGUI_SRC_CODE_CORE_SOURCE ${HETGUI_SRC_CODE_CORE_SOURCE} "${PROJECT_SOURCE_DIR}/Src/Code/Core/STL/HtString/HtString.cpp")
set(HETGUI_SRC_CODE_CORE_HEADER ${HETGUI_SRC_CODE_CORE_HEADER} "${PROJECT_SOURCE_DIR}/Src/Code/Core/STL/HtString/HtString.h")
set(HETGUI_SRC_CODE_CORE_SOURCE ${HETGUI_SRC_CODE_CORE_SOURCE} "${PROJECT_SOURCE_DIR}/Src/Code/Core/STL/HtIterator/HtIterator.cpp")
set(HETGUI_SRC_CODE_CORE_HEADER ${HETGUI_SRC_CODE_CORE_HEADER} "${PROJECT_SOURCE_DIR}/Src/Code/Core/STL/HtIterator/HtIterator.h")

# XML util
# set(HETGUI_SRC_CODE_CORE_SOURCE "${PROJECT_SOURCE_DIR}/Src/Code/Core/XML")

# Build as library
add_library(HetCore SHARED ${HETGUI_SRC_CODE_CORE_SOURCE} ${HETGUI_SRC_CODE_CORE_HEADER})
