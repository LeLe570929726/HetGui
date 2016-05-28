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

#ifndef HETGUI_EVENT_HTEVENTRECEIVERDATA_H
#define HETGUI_EVENT_HTEVENTRECEIVERDATA_H

#include "../../Global/HtClass/HtClass.h"
#include <QString>

class HtEventObject;
class HtEventData;

typedef HETGUI_CLASS void(HtEventObject::*HtReceiverFunction)(HtEventData *);

class HETGUI_CLASS HtEventReceiverData{
public:
  explicit HtEventReceiverData();
  template <class T>
  explicit HtEventReceiverData(QString eventName, QString posterName, QString receiverKey, T *receiver, void(T::*receiverFunction)(HtEventData *)) :
	  eventName(eventName), posterName(posterName), receiverKey(receiverKey), receiver(static_cast<HtEventObject *>(receiver)), receiverFunction(static_cast<HtReceiverFunction>(receiverFunction)) {
  }
  explicit HtEventReceiverData(QString eventName, QString posterName, QString receiverKey);
  ~HtEventReceiverData();

public:
  bool operator==(const HtEventReceiverData &object);
  HtEventReceiverData &operator=(const HtEventReceiverData &object);

public:
  void setEventName(QString eventName);
  void setPosterName(QString posterName);
  void setReceiverKey(QString receiverKey);
  template <class T>
  void setReceiver(T *receiver) {
	  this->receiver = static_cats<HtEventObject *>receiver;
  }
  template <class T>
  void setReceiverFunction(void(T::*receiverFunction)(HtEventData *)) {
	  this->receiverFunction = static_cast<HtReceiverFunction>(receiverFunction);
  }

public:
  QString getEventName();
  QString getPosterName();
  QString getReceiverKey();
  HtEventObject *getReceiver();
  HtReceiverFunction getReceiverFunction();

private:
  QString eventName;
  QString posterName;
  QString receiverKey;
  HtEventObject *receiver;
  HtReceiverFunction receiverFunction;
};

#endif            // HETGUI_EVENT_HTEVENTRECEIVERDATA_H
