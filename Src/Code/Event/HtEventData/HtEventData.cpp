// ============================================================
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @Description: A Gui framework base OpenGL and Qt.
// @License: HetGui project is open-source. And it follows
//           GNU Lesser General Public License v3. You can modify and distribute
//           freely as long as you follow the license.
//
// @Create: 2016/5/1 by LeLe570929726
// ============================================================

#include "HtEventData.h"

HtEventData::HtEventData() :
  eventName(""), posterName("") {
}

HtEventData::HtEventData(QString eventName, QString posterName) :
  eventName(eventName), posterName(eventName) {
}

HtEventData::~HtEventData() {
}

void HtEventData::setEventName(QString eventName) {
  this->eventName = eventName;
}

void HtEventData::setPosterName(QString posterName) {
  this->posterName = posterName;
}

QString HtEventData::getEventName() {
  return this->eventName;
}

QString HtEventData::getPosterName() {
  return this->posterName;
}
