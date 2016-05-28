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

#include "HtEventObject.h"

QMultiHash<QString, QString> HtEventObject::eventNameList;
QMultiHash<QString, QString> HtEventObject::posterNameList;
QMultiHash<QString, HtEventReceiverData> HtEventObject::receiverKeyList;

HtEventObject::HtEventObject() {
}

HtEventObject::~HtEventObject() {
}

bool HtEventObject::addReceiver(HtEventReceiverData receiverData) {
  // Check the receiver data
  if(this->checkReceiverData(receiverData, 0) == false) {
    return false;
  }
  // Check the receiverKeyList
  QList<HtEventReceiverData> tempEventReceiverList = HtEventObject::receiverKeyList.values(receiverData.getReceiverKey());
  for (auto iterator = tempEventReceiverList.begin(); iterator != tempEventReceiverList.end(); ++iterator) {
	  if (*iterator == receiverData) {
		  return false;
	  }
  }
  HtEventObject::receiverKeyList.insert(receiverData.getReceiverKey(), receiverData);
  // Check the eventNameList
  if (receiverData.getEventName() != "") {
	  QList<QString> tempEventNameList = HtEventObject::eventNameList.values(receiverData.getEventName());
	  int sameEventNameSize = 0;
	  for (auto iterator = tempEventNameList.begin(); iterator != tempEventNameList.end(); ++iterator) {
		  if (*iterator == receiverData.getReceiverKey()) {
			  ++sameEventNameSize;
		  }
	  }
	  // Add receiver to the eventNameList
	  if (sameEventNameSize == 0) {
		  HtEventObject::eventNameList.insert(receiverData.getEventName(), receiverData.getReceiverKey());
	  }
  }
  // Check the posterNameList
  if (receiverData.getPosterName() != "") {
	  QList<QString> tempPosterNameList = HtEventObject::posterNameList.values(receiverData.getPosterName());
	  int samePosterNameSize = 0;
	  for (auto iterator = tempPosterNameList.begin(); iterator != tempPosterNameList.end(); ++iterator) {
		  if (*iterator == receiverData.getReceiverKey()) {
			  ++samePosterNameSize;
		  }
	  }
	  // Add receiver to the posterNameList
	  if (samePosterNameSize == 0) {
		 HtEventObject::posterNameList.insert(receiverData.getPosterName(), receiverData.getReceiverKey());
	  }
  }
  return true;
}

bool HtEventObject::removeReceiver(HtEventReceiverData receiverData) {
  // Check the receiver data
  if(this->checkReceiverData(receiverData, 1) == false) {
    return false;
  }
  // Check the receiver for the receiverKeyList
  QList<HtEventReceiverData> tempReceiverList = HtEventObject::receiverKeyList.values(receiverData.getReceiverKey());
  if (tempReceiverList.size() == 0) {
	  return false;
  }
  // Search the receiver
  int sameEventNameSize = 0;
  int samePosterNameSize = 0;
  bool isReceiverDataSaved = false;
  for (auto iterator = tempReceiverList.begin(); iterator != tempReceiverList.end(); ++iterator) {
	  if (*iterator == receiverData) {
		  isReceiverDataSaved = true;
	  } else {
		  if (iterator->getEventName() == receiverData.getEventName() && iterator->getPosterName() != receiverData.getPosterName()) {
			  ++sameEventNameSize;
		  } else if (iterator->getEventName() != receiverData.getEventName() && iterator->getPosterName() == receiverData.getPosterName()) {
			  ++samePosterNameSize;
		  }
	  }
  }
  // Check the isReceiverDataSaved tick
  if (isReceiverDataSaved == false) {
	  return false;
  }
  // Remove the receiverData in receiverKeyList
  // TODO: Use remove() cannot delete the item, must use erase
  HtEventObject::receiverKeyList.remove(receiverData.getReceiverKey(), receiverData);
  // Check the sameEventNameSize
  if (sameEventNameSize == 0) {
	  HtEventObject::eventNameList.remove(receiverData.getEventName(), receiverData.getReceiverKey());
  }
  // Check the samePosterNameSize
  if (samePosterNameSize == 0) {
	  HtEventObject::posterNameList.remove(receiverData.getPosterName(), receiverData.getReceiverKey());
  }
  return true;
}

bool HtEventObject::postEvent(HtEventData *eventData) {
  // Check the eventData
  if(eventData->getEventName() != "" && eventData->getPosterName() != "") {
	  // Search the eventNameList and the posterNameList
	  QList<QString> tempEventNameList = HtEventObject::eventNameList.values(eventData->getEventName());
	  QList<QString> tempPosterNameList = HtEventObject::posterNameList.values(eventData->getPosterName());
	  // Put these receiver into a set
	  QSet<QString> receiverSet;
	  for (auto iterator = tempEventNameList.begin(); iterator != tempEventNameList.end(); ++iterator) {
		  receiverSet.insert(*iterator);
	  }
	  for (auto iterator = tempPosterNameList.begin(); iterator != tempPosterNameList.end(); ++iterator) {
		  receiverSet.insert(*iterator);
	  }
	  // Get all receiver from receiverKeyList
	  QList<QList<HtEventReceiverData>>  receiverList;
	  for (auto iterator = receiverSet.begin(); iterator != receiverSet.end(); ++iterator) {
		  receiverList.append(HtEventObject::receiverKeyList.values(*iterator));
	  }
	  // Search the receiver
	  for (auto iteratorOne = receiverList.begin(); iteratorOne != receiverList.end(); ++iteratorOne) {
		  QList<HtEventReceiverData> tempItem = *iteratorOne;
		  for (auto iteratorTwo = tempItem.begin(); iteratorTwo != tempItem.end(); ++iteratorTwo) {
			  HtEventReceiverData tempReceiver = *iteratorTwo;
			  // Check the receiver
			  if (tempReceiver.getEventName() == eventData->getEventName() && tempReceiver.getPosterName() == eventData->getPosterName()) {
				  // Poster event
				  (tempReceiver.getReceiver()->*tempReceiver.getReceiverFunction())(eventData);
			  } else if (tempReceiver.getEventName() == eventData->getEventName() && tempReceiver.getPosterName() == "") {
				  // Poster event
				  (tempReceiver.getReceiver()->*tempReceiver.getReceiverFunction())(eventData);
			  } else if (tempReceiver.getEventName() == "" && tempReceiver.getPosterName() == eventData->getPosterName()) {
				  // Poster event
				  (tempReceiver.getReceiver()->*tempReceiver.getReceiverFunction())(eventData);
			  }
		  }
	  }
	  return true;
  } else {
    return false;
  }
}

bool HtEventObject::checkReceiverData(HtEventReceiverData receiverData, unsigned short mode) {
  // Check the mode
  if(mode == 0) {             // Mode 0: Check the receiver pointer, the receiver function pointer, the event name, the poster name and the receiver key
    if(receiverData.getReceiver() == nullptr || receiverData.getReceiverFunction() == nullptr) {
      return false;
    } else if(receiverData.getReceiverKey() == "") {
      return false;
    } else if(receiverData.getEventName() == "" && receiverData.getPosterName() == "") {
      return false;
    } else {
      return true;
    }
  } else if(mode == 1) {              // Mode 1: Check the event name, the poster name and the receiver key
    if(receiverData.getReceiverKey() == "") {
      return false;
    } else if(receiverData.getEventName() == "" && receiverData.getPosterName() == "") {
      return false;
    } else {
      return true;
    }
  } else {
    return false;
  }
}
