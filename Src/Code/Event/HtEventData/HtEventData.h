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

#ifndef HETGUI_EVENT_HTEVENTDATA_H
#define HETGUI_EVENT_HTEVENTDATA_H

#include "../../Global/HtClass/HtClass.h"
#include <QString>

class HETGUI_CLASS HtEventData{
public:
  explicit HtEventData();
  explicit HtEventData(QString eventName, QString posterName);
  ~HtEventData();

public:
  void setEventName(QString eventName);
  void setPosterName(QString posterName);

public:
  QString getEventName();
  QString getPosterName();

private:
  QString eventName;
  QString posterName;
};

#endif            // HETGUI_EVENT_HTEVENTDATA_H
