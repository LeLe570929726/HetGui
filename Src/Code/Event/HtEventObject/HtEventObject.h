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

#ifndef HETGUI_EVENT_HTEVENTOBJECT_H
#define HETGUI_EVENT_HTEVENTOBJECT_H

#include "../../Global/HtClass/HtClass.h"
#include "../../Event/HtObject/HtObject.h"
#include "../../Event/HtEventReceiverData/HtEventReceiverData.h"
#include "../../Event/HtEventData/HtEventData.h"
#include <QMultiHash>
#include <QString>
#include <QList>
#include <QSet>

class HETGUI_CLASS HtEventObject {
public:
   explicit HtEventObject();
  ~HtEventObject();

protected:
  bool addReceiver(HtEventReceiverData receiverData);
  bool removeReceiver(HtEventReceiverData receiverData);
  bool postEvent(HtEventData *eventData);

private:
  bool checkReceiverData(HtEventReceiverData receiverData, unsigned short mode);

private:
  static QMultiHash<QString, QString> eventNameList;
  static QMultiHash<QString, QString> posterNameList;
  static QMultiHash<QString, HtEventReceiverData> receiverKeyList;
};

#endif            // HETGUI_EVENT_HTEVENTOBJECT_H
