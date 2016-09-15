// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/3 by LeLe570929726
// ----------------------------------------------------------------------------------------

#include "HtString.h"

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::HtString() :
	string() {
}

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::HtString(const char *text) :
	string(text) {
}

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// @Parameter: size - The size of text that you will add.
//             text - The text that you will add.
// ----------------------------------------------------------------------------------------
HtString::HtString(int size, char text) :
  string(size, text) {
}

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// @Parameter: other - The other HtString object
// ----------------------------------------------------------------------------------------
HtString::HtString(const HtString &other) :
  string(other.string) {
}

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// @Parameter: other - The other HtString object.
// ----------------------------------------------------------------------------------------
HtString::HtString(HtString &&other) :
  string(other.string) {
}

// ----------------------------------------------------------------------------------------
// @Description: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::~HtString() {

}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - Compare with this HtString object and
//                    the text.
// ----------------------------------------------------------------------------------------
bool HtString::operator!=(const char *text) {
	return this->string != text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - Compare with this HtString object and
//                    the text.
// ----------------------------------------------------------------------------------------
bool HtString::operator!=(const HtString &text) {
  return this->string != text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Add the new text into the source text.
// @Parameter: text - The text that you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator+=(const char *text) {
  this->string += text;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Add the new text into the source text.
// @Parameter: text - The text that you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator+=(const HtString &text) {
  this->string += text.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<(const char *text) {
  return this->string < text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<(const HtString &text) {
  return this->string < text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<=(const char *text) {
  return this->string <= text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<=(const HtString &text) {
  return this->string <= text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(const char *other) {
  this->string = other;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(const HtString &other) {
  this->string = other.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(HtString &&other) {
  this->string = other.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator==(const char *text) {
  return this->string == text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator==(const HtString &text) {
  return this->string == text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>(const char *text) {
  return this->string > text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>(const HtString &text) {
  return this->string > text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>=(const char *text) {
  return this->string >= text;
}

// ----------------------------------------------------------------------------------------
// @Description: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>=(const HtString &text) {
  return this->string >= text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Get a single text by index.
// @Parameter: index - The index of the text.
// ----------------------------------------------------------------------------------------
const char HtString::operator[](int index) {
  return this->string[index];
}

// ----------------------------------------------------------------------------------------
// @Descript: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const char *text) {
  this->string.append(text);
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descript: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const HtString &text) {
  this->string.append(text.string);
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Get a single text by index.
// @Parameter: index - The index of the text.
// ----------------------------------------------------------------------------------------
const char HtString::at(int index) {
  return this->string[index];
}

// ----------------------------------------------------------------------------------------
// @Description: Get the begin iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::begin() {
	HtStringIterator iterator = HtStringIterator(this->string.begin());
	return iterator;
}

// ----------------------------------------------------------------------------------------
// @Description: Get the end iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::end() {
	HtStringIterator iterator = HtStringIterator(this->string.end());
	return iterator;
}

// ----------------------------------------------------------------------------------------
// @Description: Get the length of the string.
// ----------------------------------------------------------------------------------------
int HtString::length() {
	return static_cast<int>(this->string.size());
}

// ----------------------------------------------------------------------------------------
// @Description: Get the std string object.
// ----------------------------------------------------------------------------------------
std::string HtString::stdString() {
	return this->string;
}

// ----------------------------------------------------------------------------------------
// @Description: Push the text behind the source string.
// @Parameter: text - The text that you will push it behind
//                    the source string.
// ----------------------------------------------------------------------------------------
void HtString::pushBack(const char *text) {
	this->string += text;
}

// ----------------------------------------------------------------------------------------
// @Description: Push the text behind the source string.
// @Parameter: text - The text that you will push it behind
//                    the source string.
// ----------------------------------------------------------------------------------------
void HtString::pushBack(const HtString &text) {
	this->string += text.string;
}

// ----------------------------------------------------------------------------------------
// @Description: Remove a part of text.
// @Parameter: position - The start index.
//             end - The end index.
// ----------------------------------------------------------------------------------------
HtString &HtString::remove(int position, int end) {
	this->string.erase(position, end);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Remove a part of text.
// @Parameter: position - The text's iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::remove(HtStringIterator position) {
	std::string::iterator tempIterator = this->string.erase(position.stdIterator());
	return tempIterator;
}

// ----------------------------------------------------------------------------------------
// @Description: Remove a part of text.
// @Parameter: position - The start text's iterator.
//             end - The end text's iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::remove(HtStringIterator position, HtStringIterator end) {
	std::string::iterator tempIterator = this->string.erase(position.stdIterator(), end.stdIterator());
	return tempIterator;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: position - The start text's index.
//             number - The number of the text that you want to
//                      replace.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(int position, int number, const char *text) {
	this->string.replace(position, number, text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: position - The start text's index.
//             number - The number of the text that you want to
//                      replace.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(int position, int number, const HtString &text) {
	this->string.replace(position, number, text.string);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: positionSource - The source text's start index.
//             numberSource - The number of the source text that
//                      you want to replace.
//             text - The text you want to add in.
//             numberAdd - The number of the add text that you
//                      want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(int positionSource, int numberSource, const char *text, int numberAdd) {
	this->string.replace(positionSource, numberSource, text, numberAdd);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: positionSource - The source text's start index.
//             numberSource - The number of the source text that
//                      you want to replace.
//             text - The text you want to add in.
//             positionAdd - The add text's start index.
//             numberAdd - The number of the add text that you
//                      want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(int positionSource, int numberSource, const HtString &text, int positionAdd, int numberAdd) {
	this->string.replace(positionSource, numberSource, text.string, positionAdd, numberAdd);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: position - The start text's index.
//             number - The number of the text that you want to
//                      replace.
//             count - The number of the text's size.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(int position, int number, int count, char text) {
	this->string.replace(position, number, count, text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const char *text) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const HtString &text) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text.string);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: startSource - The source's string start iterator.
//             endSource - The source's string end iterator.
//             startAdd - The add's string start iterator.
//             endAdd - The add's string end iterator.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator startSource, HtStringIterator endSource, HtStringIterator startAdd, HtStringIterator endAdd) {
	this->string.replace(startSource.stdIterator(), endSource.stdIterator(), startAdd.stdIterator(), endAdd.stdIterator());
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text that you want to add in.
//             count - The size of the add's text.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const char *text, int count) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text, count);
	return *this;
}
