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

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Assign new content to container.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	// ----------------------------------------------------------------------------------------
	void assign(HtListIterator<T> start, HtListIterator<T> end) {
		this->list.assign(start.stdIterator(), end.stdIterator());
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Assign new content to container.
	// @Parameter: size - New size for the container.
	//             value - Value to fill the container with.
	// ----------------------------------------------------------------------------------------
	void assign(int size, const T &value) {
		this->list.assign(size, value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert element at beginning.
	// @Parameter: value - Value to be copied (or moved) to the
	//                     inserted element.
	// ----------------------------------------------------------------------------------------
	void pushFront(const T &value) {
		this->list.push_front(value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert element at beginning.
	// @Parameter: value - Value to be copied (or moved) to the
	//                     inserted element.
	// ----------------------------------------------------------------------------------------
	void pushFront(T &&value) {
		this->list.push_front(value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Delete first element.
	// ----------------------------------------------------------------------------------------
	void removeFront() {
		this->list.pop_front();
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Add element at the end.
	// @Parameter: value - Value to be copied (or moved) to the
	//                     inserted element.
	// ----------------------------------------------------------------------------------------
	void pushBack(const T &value) {
		this->list.push_back(value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Add element at the end.
	// @Parameter: value - Value to be copied (or moved) to the
	//                     inserted element.
	// ----------------------------------------------------------------------------------------
	void pushBack(T &&value) {
		this->list.push_back(value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Delete last element.
	// ----------------------------------------------------------------------------------------
	void removeBack() {
		this->list.pop_back();
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert elements.
	// @Parameter: position - Position in the container where the
	//                        new elements are inserted.
	//             value - Value to be copied (or moved) to the inserted
	//                        elements.
	// ----------------------------------------------------------------------------------------
	HtListIterator<T> insert(HtListIterator<T> position, const T &value) {
		HtListIterator<T> tempIterator = HtListIterator<T>(this->list.insert(position.stdIterator(), value));
		return tempIterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert elements.
	// @Parameter: position - Position in the container where the
	//                        new elements are inserted.
	//             value - Value to be copied (or moved) to the inserted
	//                        elements.
	// ----------------------------------------------------------------------------------------
	HtListIterator<T> insert(HtListIterator<T> position, T &&value) {
		HtListIterator<T> tempIterator = HtListIterator<T>(this->list.insert(position.stdIterator(), value));
		return tempIterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert elements.
	// @Parameter: position - Position in the container where the
	//                        new elements are inserted.
	//             size - Number of elements to insert.
	//             value - Value to be copied (or moved) to the inserted
	//                        elements.
	// ----------------------------------------------------------------------------------------
	HtListIterator<T> insert(HtListIterator<T> position, int size, const T &value) {
		HtListIterator<T> tempIterator = HtListIterator<T>(this->list.insert(position.stdIterator(), size, value));
		return tempIterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Insert elements.
	// @Parameter: position - Position in the container where the
	//                        new elements are inserted.
	//             start - The start iterator of other list.
	//             end - The end iterator of other list.
	// ----------------------------------------------------------------------------------------
	HtListIterator<T> insert(HtListIterator<T> position, HtListIterator<T> start, HtListIterator<T> end) {
		HtListIterator<T> tempIterator = HtListIterator<T>(this->list.insert(position.stdIterator(), start.stdIterator(), end.stdIterator()));
		return tempIterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Erase elements.
	// @Parameter: position - Iterator pointing to a single element
	//                        to be removed from the list.
	// ----------------------------------------------------------------------------------------
	HtListIterator<T> erase(HtListIterator<T> position) {
		HtListIterator<T> tempIterator = HtListIterator<T>(this->list.erase(position.stdIterator()));
		return  tempIterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Resizes the container.
	// @Parameter: size - New container size, expressed in number
	//                    of elements.
	// ----------------------------------------------------------------------------------------
	void resize(int size) {
		this->list.resize(size);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Resizes the container.
	// @Parameter: size - New container size, expressed in number
	//                    of elements.
	//             value - Object whose content is copied to the added
	//                     elements in list.
	// ----------------------------------------------------------------------------------------
	void resize(int size, const T &value) {
		this->list.resize(size, value);
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Removes all elements from the list
	//               container(which are destroyed), and leaving the
	//               container with a size of 0.
	// ----------------------------------------------------------------------------------------
	void clear() {
		this->list.clear();
	}

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Remove elements with specific value.
	// @Parameter: value - Value of the elements to be removed.
	// ----------------------------------------------------------------------------------------
	void remove(const T &value) {
		this->list.remove(value);
	}

private:
  std::list<T> list;
};

#endif                 // HETGUI_CORE_STL_HTLIST_H
