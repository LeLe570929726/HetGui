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

#include "HtEventReceiverData.h"

HtEventReceiverData::HtEventReceiverData() :
  eventName(""), posterName(""), receiverKey(""), receiver(nullptr), receiverFunction(nullptr) {
}

HtEventReceiverData::HtEventReceiverData(QString eventName, QString posterName, QString receiverKey) :
	eventName(eventName), posterName(posterName), receiverKey(receiverKey), receiver(nullptr), receiverFunction(nullptr) {
}

HtEventReceiverData::~HtEventReceiverData() {
}

bool HtEventReceiverData::operator==(const HtEventReceiverData &object) {
  // Chech the receiver pointer and the receiver function pointer
  if ((this->receiver == nullptr && this->receiverFunction == nullptr) || (object.receiver == nullptr && object.receiverFunction == nullptr)) {
	  if(this->eventName == object.eventName && this->posterName == object.posterName && this->receiverKey == object.receiverKey) {
      return true;
    } else {
      return false;
    }
  } else {
    if(this->eventName == object.eventName && this->posterName == object.posterName && this->receiverKey == object.receiverKey && this->receiver == object.receiver && this->receiverFunction == object.receiverFunction) {
      return true;
    } else {
      return false;
    }
  }
}

HtEventReceiverData & HtEventReceiverData::operator=(const HtEventReceiverData & object) {
	this->eventName = object.eventName;
	this->posterName = object.posterName;
	this->receiverKey = object.receiverKey;
	this->receiver = object.receiver;
	this->receiverFunction = object.receiverFunction;
	return *this;
}

void HtEventReceiverData::setEventName(QString eventName) {
  this->eventName = eventName;
}

void HtEventReceiverData::setPosterName(QString posterName) {
  this->posterName = posterName;
}

void HtEventReceiverData::setReceiverKey(QString receiverKey) {
  this->receiverKey = receiverKey;
}

QString HtEventReceiverData::getEventName() {
  return this->eventName;
}

QString HtEventReceiverData::getPosterName() {
  return this->posterName;
}

QString HtEventReceiverData::getReceiverKey() {
  return this->receiverKey;
}

HtEventObject *HtEventReceiverData::getReceiver() {
  return this->receiver;
}

HtReceiverFunction HtEventReceiverData::getReceiverFunction() {
  return this->receiverFunction;
}
