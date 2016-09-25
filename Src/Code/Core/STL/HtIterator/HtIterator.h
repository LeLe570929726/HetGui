// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/4 by LeLe570929726
// ----------------------------------------------------------------------------------------
#ifndef HETGUI_CORE_STL_HTITERATOR_H
#define HETGUI_CORE_STL_HTITERATOR_H

#include "../../Global/HtGlobal/HtGlobal.h"
#include <string>

// ----------------------------------------------------------------------------------------
// @Description: Iterator's base class.
// ----------------------------------------------------------------------------------------
template <typename T>
class HETGUI_CLASS HtIterator {
public:
	// ----------------------------------------------------------------------------------------
	// @Description: Iterator's constructor.
	// ----------------------------------------------------------------------------------------
	HtIterator() :
		iterator() {
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Iterator's constructor.
	// @Parameter: other - The other iterator that you want to
	//                     add.
	// ----------------------------------------------------------------------------------------
	HtIterator(const HtIterator<T> &other) :
		iterator(other.iterator) {
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Iterator's constructor.
	// @Parameter: iterator - The std iterator.
	// ----------------------------------------------------------------------------------------
	HtIterator(T iterator) :
		iterator(iterator) {
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Iterator's destructor.
	// ----------------------------------------------------------------------------------------
	~HtIterator() {

	}

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - Compare this iterator and the input
	//                     iterator.
	// ----------------------------------------------------------------------------------------
	bool operator!=(const HtIterator<T> &other) {
		return this->iterator != other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Get the source object.
	// ----------------------------------------------------------------------------------------
	T &operator*() {
		return *this->iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Advances the iterator to the next item.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> &operator++() {
		++this->iterator;
		return *this;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Advances the iterator to the next item.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> operator++(int) {
		this->iterator++;
		return *this;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Advances the iterator to the last item.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> &operator--() {
		--this->iterator;
		return *this;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Advances the iterator to the last item.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> operator--(int) {
		this->iterator--;
		return *this;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Get the source object's pointer.
	// ----------------------------------------------------------------------------------------
	T *operator->() {
		return *iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - The iterator that you want to compare.
	// ----------------------------------------------------------------------------------------
	bool operator<(const HtIterator<T> &other) {
		return this->iterator < other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - The iterator that you want to compare.
	// ----------------------------------------------------------------------------------------
	bool operator<=(const HtIterator<T> &other) {
		return this->iterator <= other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - The iterator that you want to compare.
	// ----------------------------------------------------------------------------------------
	bool operator==(const HtIterator<T> &other) {
		return this->iterator == other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - The iterator that you want to compare.
	// ----------------------------------------------------------------------------------------
	bool operator>(const HtIterator<T> &other) {
		return this->iterator > other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this iterator and input iterator.
	// @Parameter: other - The iterator that you want to compare.
	// ----------------------------------------------------------------------------------------
	bool operator>=(const HtIterator<T> &other) {
		return this->iterator >= other.iterator;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Let this iterator add a size.
	// @Parameter: size - The size that you want to add.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> &operator+=(int size) {
		this->iterator += size;
		return *this;
	}
	// ----------------------------------------------------------------------------------------
	// @Description: Let this iterator reduce a size.
	// @Parameter: size - The size that you want to reduce.
	// ----------------------------------------------------------------------------------------
	HtIterator<T> &operator-=(int size) {
		this->iterator -= size;
		return *this;
	}

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Get the source iterator.
	// ----------------------------------------------------------------------------------------
	T stdIterator() {
		return this->iterator;
	}

private:
	T iterator;
};

#endif								// HETGUI_CORE_STL_HTITERATOR_H
