// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/24 by LeLe570929726
// ----------------------------------------------------------------------------------------
#ifndef HETGUI_CORE_STL_HTLIST_H
#define HETGUI_CORE_STL_HTLIST_H

#include "../../Global/HtGlobal/HtGlobal.h"
#include "../../STL/HtIterator/HtIterator.h"
#include <list>

// ----------------------------------------------------------------------------------------
// @Description: HtList's iterator
// ----------------------------------------------------------------------------------------
template <typename T>
using HtListIterator = HtIterator<typename std::list<T>::iterator>;

// ----------------------------------------------------------------------------------------
// @Description: Use this class to store data to in a list. It's
//               based on STL's list.
// ----------------------------------------------------------------------------------------
template <typename T>
class HETGUI_CLASS HtList {
public:
  // ----------------------------------------------------------------------------------------
  // @Description: HtList's constructor.
  // ----------------------------------------------------------------------------------------
	HtList() :
    list() {
  }
  // ----------------------------------------------------------------------------------------
	// @Description: HtList's constructor.
	// @Parameter: other - The other HtList object.
	// ----------------------------------------------------------------------------------------
  HtList(const HtList<T> &other) :
    list(other.list) {
  }
  // ----------------------------------------------------------------------------------------
  // @Description: HtList's constructor.
  // @Parameter: other - The other HtList object.
  // ----------------------------------------------------------------------------------------
  HtList(HtList<T> &&other) :
    list(other.list) {
  }
  // ----------------------------------------------------------------------------------------
  // @Description: HtList's constructor.
  // @Parameter: other - The other std list object.
  // ----------------------------------------------------------------------------------------
  HtList(const std::string &other) :
    list(other) {
  }
  // ----------------------------------------------------------------------------------------
  // @Description: HtList's destructor.
  // ----------------------------------------------------------------------------------------
  ~HtList() {

  }
  // ----------------------------------------------------------------------------------------
  // @Description: HtList's assignment function.
  // @Parameter: other - The other HtList object.
  // ----------------------------------------------------------------------------------------
  HtList<T> &operator=(const HtList &other) {
    this->list = other.list;
    return *this;
  }

public:
  // ----------------------------------------------------------------------------------------
  // @Description: Get the begin iterator.
  // ----------------------------------------------------------------------------------------
  HtListIterator<T> begin() {
    HtListIterator<T> tempIterator = HtListIterator<T>(this->list.begin());
    return tempIterator;
  }
  // ----------------------------------------------------------------------------------------
  // @Description: Get the end iterator.
  // ----------------------------------------------------------------------------------------
  HtListIterator<T> end() {
    HtListIterator<T> tempIterator = HtListIterator<T>(this->list.end());
    return tempIterator;
  }

public:
  // ----------------------------------------------------------------------------------------
  // @Description: To determine whether the list is empty.
  // ----------------------------------------------------------------------------------------
  int empty() {
    return this->empty();
  }
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Get the size of the list.
  // ----------------------------------------------------------------------------------------
  int size() {
  	return static_cast<int>(this->list.size());
  }
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Get the max size of the list.
  // ----------------------------------------------------------------------------------------
  int maxSize() {
  	return static_cast<int>(this->list.max_size());
  }

public:
  // ----------------------------------------------------------------------------------------
  // @Description: Get the front char's reference.
  // ----------------------------------------------------------------------------------------
  T &front() {
  	return this->list.front();
  }
  // ----------------------------------------------------------------------------------------
  // @Description: Get the back char's reference.
  // ----------------------------------------------------------------------------------------
  T &back() {
  	return this->list.back();
  }

private:
  std::list<T> list;
};

#endif                 // HETGUI_CORE_STL_HTLIST_H
