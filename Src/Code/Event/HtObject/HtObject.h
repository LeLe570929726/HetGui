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

#ifndef HETGUI_EVENT_HTOBJECT_H
#define HETGUI_EVENT_HTOBJECT_H

#include "..\..\Global\HtClass\HtClass.h"
#include <QHash>
#include <QString>

class HETGUI_CLASS HtObject {
public:
  explicit HtObject(HtObject *parent = nullptr);
  ~HtObject();

public:
	bool setParent(HtObject *parent);

private:
	void addChild(HtObject *child);

private:
	HtObject *parent;
	QHash<QString, HtObject *> childList;
};

#endif            // HETGUI_EVENT_HTOBJECT_H
