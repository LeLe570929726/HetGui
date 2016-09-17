// ----------------------------------------------------------------------------------------
// Copyright © 2016 LeLe570929726. All rights reserved.
//
// @Project: HetGui
// @License: Licensed under GNU General Public License v3.
// @Craete: 2016/9/3 by LeLe570929726
// ----------------------------------------------------------------------------------------

#include "HtString.h"

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::HtString() :
	string() {
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::HtString(const char *text) :
	string(text) {
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// @Parameter: size - The size of text that you will add.
//             text - The text that you will add.
// ----------------------------------------------------------------------------------------
HtString::HtString(int size, char text) :
  string(size, text) {
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// @Parameter: other - The other HtString object
// ----------------------------------------------------------------------------------------
HtString::HtString(const HtString &other) :
  string(other.string) {
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// @Parameter: other - The other HtString object.
// ----------------------------------------------------------------------------------------
HtString::HtString(HtString &&other) :
  string(other.string) {
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: HtString's constructor.
// ----------------------------------------------------------------------------------------
HtString::~HtString() {

}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - Compare with this HtString object and
//                    the text.
// ----------------------------------------------------------------------------------------
bool HtString::operator!=(const char *text) {
	return this->string != text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - Compare with this HtString object and
//                    the text.
// ----------------------------------------------------------------------------------------
bool HtString::operator!=(const HtString &text) {
  return this->string != text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Add the new text into the source text.
// @Parameter: text - The text that you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator+=(const char *text) {
  this->string += text;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Add the new text into the source text.
// @Parameter: text - The text that you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator+=(const HtString &text) {
  this->string += text.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<(const char *text) {
  return this->string < text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<(const HtString &text) {
  return this->string < text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<=(const char *text) {
  return this->string <= text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator<=(const HtString &text) {
  return this->string <= text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(const char *other) {
  this->string = other;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(const HtString &other) {
  this->string = other.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Set the source text to the new text.
// @Parameter: other - The other text or HtString object.
// ----------------------------------------------------------------------------------------
HtString &HtString::operator=(HtString &&other) {
  this->string = other.string;
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator==(const char *text) {
  return this->string == text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator==(const HtString &text) {
  return this->string == text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>(const char *text) {
  return this->string > text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>(const HtString &text) {
  return this->string > text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>=(const char *text) {
  return this->string >= text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Compare this HtString object and input text.
// @Parameter: text - The text that you want to compare.
// ----------------------------------------------------------------------------------------
bool HtString::operator>=(const HtString &text) {
  return this->string >= text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get a single text by index.
// @Parameter: index - The index of the text.
// ----------------------------------------------------------------------------------------
const char HtString::operator[](int index) {
  return this->string[index];
}

// ----------------------------------------------------------------------------------------
// @Description: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const char *text) {
  this->string.append(text);
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const HtString &text) {
  this->string.append(text.string);
  return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
//             size - The size of the text that you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const char *text, int size) {
	this->string.append(text, size);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Append some text on the back of the source
//            text.
// @Parameter: text - The text that you want to add the back
//                    of the source text.
//             postion - The start of the text.
//             number - The length of the text.
// ----------------------------------------------------------------------------------------
HtString &HtString::append(const HtString &text, int position, int number) {
	this->string.append(text.string, position, number);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Request the store memory.
// @Parameter: size - The length of the memory.
// ----------------------------------------------------------------------------------------
void HtString::reserve(int size) {
	this->string.reserve(size);
}

// ----------------------------------------------------------------------------------------
// @Description: Get the back char's reference.
// ----------------------------------------------------------------------------------------
char &HtString::back() {
	return this->string.back();
}

// ----------------------------------------------------------------------------------------
// @Description: Get the front char's reference.
// ----------------------------------------------------------------------------------------
char &HtString::front() {
	return this->string.front();
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get a single text by index.
// @Parameter: index - The index of the text.
// ----------------------------------------------------------------------------------------
const char HtString::at(int index) {
  return this->string[index];
}

// ----------------------------------------------------------------------------------------
// @Description: Assign content to string.
// @Parameter: text - Copies text.
// ----------------------------------------------------------------------------------------
HtString &HtString::assign(const char *text) {
	this->string.assign(text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Assign content to string.
// @Parameter: text - Copies text.
// ----------------------------------------------------------------------------------------
HtString &HtString::assign(const HtString &text) {
	this->string.assign(text.string);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Assign content to string.
// @Parameter: text - Copies text.
//             number - Copies the portion of text.
// ----------------------------------------------------------------------------------------
HtString &HtString::assign(const char *text, int number) {
	this->string.assign(text, number);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Assign content to string.
// @Parameter: text - Copies text.
//             postion - Copies the start of text.
//             end - Copies the end of text.
// ----------------------------------------------------------------------------------------
HtString &HtString::assign(const HtString &text, int position, int end) {
	this->string.assign(text.string, position, end);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Description: Assign content to string.
// @Parameter: text - Copies text.
//             number - The size of text.
// ----------------------------------------------------------------------------------------
HtString &HtString::assign(char text, int number) {
	this->string.assign(number, text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the begin iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::begin() {
	HtStringIterator iterator = HtStringIterator(this->string.begin());
	return iterator;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the end iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::end() {
	HtStringIterator iterator = HtStringIterator(this->string.end());
	return iterator;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the length of the string.
// ----------------------------------------------------------------------------------------
int HtString::length() {
	return static_cast<int>(this->string.size());
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the size of the string.
// ----------------------------------------------------------------------------------------
int HtString::size() {
	return static_cast<int>(this->string.size());
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the max size of the string.
// ----------------------------------------------------------------------------------------
int HtString::maxSize() {
	return static_cast<int>(this->string.max_size());
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Resize the string.
// @Parameter: size - The new size.
// ----------------------------------------------------------------------------------------
void HtString::resize(int size) {
	this->resize(size);
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Resize the string.
// @Parameter: size - The new size.
//             text - Use this text to fill the rest part of the string.
// ----------------------------------------------------------------------------------------
void HtString::resize(int size, char text) {
	this->resize(size, text);
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: To determine whether the string is empty.
// ----------------------------------------------------------------------------------------
int HtString::empty() {
	return this->string.empty();
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the capacity of the string.
// ----------------------------------------------------------------------------------------
int HtString::capacity() {
	return static_cast<int>(this->string.capacity());
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the std string object.
// ----------------------------------------------------------------------------------------
std::string HtString::stdString() {
	return this->string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Get the c-style text.
// ----------------------------------------------------------------------------------------
const char *HtString::constData() {
	return this->string.c_str();
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Push the text behind the source string.
// @Parameter: text - The text that you will push it behind
//                    the source string.
// ----------------------------------------------------------------------------------------
void HtString::pushBack(const char *text) {
	this->string += text;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Push the text behind the source string.
// @Parameter: text - The text that you will push it behind
//                    the source string.
// ----------------------------------------------------------------------------------------
void HtString::pushBack(const HtString &text) {
	this->string += text.string;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Remove a part of text.
// @Parameter: position - The start index.
//             end - The end index.
// ----------------------------------------------------------------------------------------
HtString &HtString::remove(int position, int end) {
	this->string.erase(position, end);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Remove a part of text.
// @Parameter: position - The text's iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::remove(HtStringIterator position) {
	std::string::iterator tempIterator = this->string.erase(position.stdIterator());
	return tempIterator;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Remove a part of text.
// @Parameter: position - The start text's iterator.
//             end - The end text's iterator.
// ----------------------------------------------------------------------------------------
HtStringIterator HtString::remove(HtStringIterator position, HtStringIterator end) {
	std::string::iterator tempIterator = this->string.erase(position.stdIterator(), end.stdIterator());
	return tempIterator;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const char *text) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text you want to add in.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const HtString &text) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text.string);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Replace a part of text.
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
// @Descriptionion: Replace a part of text.
// @Parameter: start - The start iterator.
//             end - The end iterator.
//             text - The text that you want to add in.
//             count - The size of the add's text.
// ----------------------------------------------------------------------------------------
HtString &HtString::replace(HtStringIterator start, HtStringIterator end, const char *text, int count) {
	this->string.replace(start.stdIterator(), end.stdIterator(), text, count);
	return *this;
}

// ----------------------------------------------------------------------------------------
// @Descriptionion: Clear the string.
// ----------------------------------------------------------------------------------------
void HtString::clear() {
	this->string.clear();
}
