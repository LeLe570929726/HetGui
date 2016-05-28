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

#include "HtObject.h"

HtObject::HtObject(HtObject *parent) :
	parent(nullptr), childList(QList<HtObject *>()) {
}

HtObject::~HtObject() {
}

bool HtObject::setParent(HtObject *parent) {
	// Check the parent pointer
	if (parent == nullptr) {
		return false;
	}
	// Save the parent
	this->parent = parent;
	// Save child for the parent
	
}

void HtObject::addChild(HtObject *child) {
	// Check the child pointer
	if (child == nullptr) {

	}
}
