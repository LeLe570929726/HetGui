 // ----------------------------------------------------------------------------------------
 // Copyright © 2016 LeLe570929726. All rights reserved.
 //
 // @Project: HetGui
 // @License: Licensed under GNU General Public License v3.
 // @Craete: 2016/9/3 by LeLe570929726
 // ----------------------------------------------------------------------------------------
 #ifndef HETGUI_CORE_STL_HTSTRING_H
 #define HETGUI_CORE_STL_HTSTRING_H

#include "../../Global/HtGlobal/HtGlobal.h"
#include "../../STL/HtIterator/HtIterator.h"
#include <string>

// ----------------------------------------------------------------------------------------
// @Description: HtString's iterator
// ----------------------------------------------------------------------------------------
using HtStringIterator = HtIterator<std::string::iterator>;

// ----------------------------------------------------------------------------------------
// @Description: Use this class to store text. It's based on
//               STL's string.
// ----------------------------------------------------------------------------------------
class HETGUI_CLASS HtString {
public:
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// ----------------------------------------------------------------------------------------
	HtString();
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// @Parameter: text - Initialization text.
	// ----------------------------------------------------------------------------------------
	HtString(const char *text);
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// @Parameter: size - The size of text that you will add.
	//             text - The text that you will add.
	// ----------------------------------------------------------------------------------------
	HtString(int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// @Parameter: other - The other HtString object.
	// ----------------------------------------------------------------------------------------
	HtString(const HtString &other);
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// @Parameter: other - The other HtString object.
	// ----------------------------------------------------------------------------------------
	HtString(HtString &&other);
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
	// @Parameter: string - The other std string object.
	// ----------------------------------------------------------------------------------------
	HtString(const std::string &string);
	// ----------------------------------------------------------------------------------------
	// @Description: HtString's constructor.
  // ----------------------------------------------------------------------------------------
  ~HtString();

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Compare this HtString object and input text.
  // @Parameter: text - Compare with this HtString object and
  //                    the text.
	// ----------------------------------------------------------------------------------------
  bool operator!=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - Compare with this HtString object and
  //                    the text.
  // ----------------------------------------------------------------------------------------
  bool operator!=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Add the new text into the source text.
  // @Parameter: text - The text that you want to add in.
  // ----------------------------------------------------------------------------------------
  HtString &operator+=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Add the new text into the source text.
  // @Parameter: text - The text that you want to add in.
  // ----------------------------------------------------------------------------------------
  HtString &operator+=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(const char *other);
  // ----------------------------------------------------------------------------------------
  // @Description: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(const HtString &other);
  // ----------------------------------------------------------------------------------------
  // @Description: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(HtString &&other);
  // ----------------------------------------------------------------------------------------
  // @Description: Set the source text to the new text.
  // @Parameter: string - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(const std::string &string);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator==(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator==(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Get a single text by index.
  // @Parameter: index - The index of the text.
  // ----------------------------------------------------------------------------------------
  const char operator[](int index);

public:
  // ----------------------------------------------------------------------------------------
  // @Description: Append some text on the back of the source
  //            text.
  // @Parameter: text - The text that you want to add the back
  //                    of the source text.
  // ----------------------------------------------------------------------------------------
  HtString &append(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Append some text on the back of the source
  //            text.
  // @Parameter: text - The text that you want to add the back
  //                    of the source text.
  // ----------------------------------------------------------------------------------------
  HtString &append(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Append some text on the back of the source
  //            text.
  // @Parameter: text - The text that you want to add the back
  //                    of the source text.
  //             size - The size of the text that you want to add in.
  // ----------------------------------------------------------------------------------------
  HtString &append(const char *text, int size);
	// ----------------------------------------------------------------------------------------
	// @Description: Append some text on the back of the source
	//            text.
	// @Parameter: text - The text that you want to add the back
	//                    of the source text.
	//             position - The start of the text.
	//             number - The length of the text.
	// ----------------------------------------------------------------------------------------
	HtString &append(const HtString &text, int position, int number);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The position that you want to insert.
	//             text - The text that you want to insert.
	// ----------------------------------------------------------------------------------------
	HtString &insert(int position, const char *text);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The position that you want to insert.
	//             text - The text that you want to insert.
	// ----------------------------------------------------------------------------------------
	HtString &insert(int position, const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The position that you want to insert.
	//             text - The text that you want to insert.
	//             size - The size of the text.
	// ----------------------------------------------------------------------------------------
	HtString &insert(int position, const char *text, int size);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The position that you want to insert.
	//             text - The text that you want to insert.
	//             start - The start of the adding text.
	//             end - The end of the adding text.
	// ----------------------------------------------------------------------------------------
	HtString &insert(int position, const HtString &text, int start, int end);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The index that you want to insert.
	//             size - The number of the text.
	//             text - The text.
	// ----------------------------------------------------------------------------------------
	HtString &insert(int position, int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: position - The iteartor that you want to insert.
	//             size - The number of the text.
	//             text - The text.
	// ----------------------------------------------------------------------------------------
	void insert(HtStringIterator position, int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: Insert some text in the source text.
	// @Parameter: start - The index that you want to insert.
	//             text - The text.
	// ----------------------------------------------------------------------------------------
	HtStringIterator insert(HtStringIterator start, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: Request the store memory.
	// @Parameter: size - The length of the memory.
	// ----------------------------------------------------------------------------------------
	void reserve(int size);
	// ----------------------------------------------------------------------------------------
	// @Description: Get the back char's reference.
	// ----------------------------------------------------------------------------------------
	char &back();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the front char's reference.
	// ----------------------------------------------------------------------------------------
	char &front();
  // ----------------------------------------------------------------------------------------
  // @Description: Get a single text by index.
  // @Parameter: index - The index of the text.
  // ----------------------------------------------------------------------------------------
  const char at(int index);

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Assign content to string.
	// @Parameter: text - Copies text.
	// ----------------------------------------------------------------------------------------
  HtString &assign(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Description: Assign content to string.
  // @Parameter: text - Copies text.
  // ----------------------------------------------------------------------------------------
  HtString &assign(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Assign content to string.
  // @Parameter: text - Copies text.
  //             number - Copies the portion of text.
  // ----------------------------------------------------------------------------------------
  HtString &assign(const char *text, int number);
  // ----------------------------------------------------------------------------------------
  // @Description: Assign content to string.
  // @Parameter: text - Copies text.
  //             position - Copies the start of text.
  //             end - Copies the end of text.
  // ----------------------------------------------------------------------------------------
  HtString &assign(const HtString &text, int position, int end);
  // ----------------------------------------------------------------------------------------
  // @Description: Assign content to string.
  // @Parameter: text - Copies text.
  //             number - The size of text.
  // ----------------------------------------------------------------------------------------
  HtString &assign(char text, int number);

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Get the begin iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator begin();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the end iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator end();

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Get the length of the string.
	// ----------------------------------------------------------------------------------------
	int length();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the size of the string.
	// ----------------------------------------------------------------------------------------
	int size();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the max size of the string.
	// ----------------------------------------------------------------------------------------
	int maxSize();
	// ----------------------------------------------------------------------------------------
	// @Description: Resize the string.
	// @Parameter: size - The new size.
	// ----------------------------------------------------------------------------------------
	void resize(int size);
	// ----------------------------------------------------------------------------------------
	// @Description: Resize the string.
	// @Parameter: size - The new size.
	//             text - Use this text to fill the rest part of the string.
	// ----------------------------------------------------------------------------------------
	void resize(int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: To determine whether the string is empty.
	// ----------------------------------------------------------------------------------------
	int empty();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the capacity of the string.
	// ----------------------------------------------------------------------------------------
	int capacity();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the std string object.
	// ----------------------------------------------------------------------------------------
	std::string stdString();
	// ----------------------------------------------------------------------------------------
	// @Description: Get the c-style text.
	// ----------------------------------------------------------------------------------------
	const char *constData();

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Push the text behind the source string.
	// @Parameter: text - The text that you will push it behind
	//                    the source string.
	// ----------------------------------------------------------------------------------------
	void pushBack(const char *text);
	// ----------------------------------------------------------------------------------------
	// @Description: Push the text behind the source string.
	// @Parameter: text - The text that you will push it behind
	//                    the source string.
	// ----------------------------------------------------------------------------------------
	void pushBack(const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Description: Remove a part of text.
	// @Parameter: position - The start index.
	//             end - The end index.
	// ----------------------------------------------------------------------------------------
	HtString &remove(int position, int end);
	// ----------------------------------------------------------------------------------------
	// @Description: Remove a part of text.
	// @Parameter: position - The text's iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator remove(HtStringIterator position);
	// ----------------------------------------------------------------------------------------
	// @Description: Remove a part of text.
	// @Parameter: start - The start text's iterator.
	//             end - The end text's iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator remove(HtStringIterator start, HtStringIterator end);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, const char *text);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: positionSource - The source text's start index.
	//             numberSource - The number of the source text that
	//                      you want to replace.
	//             text - The text you want to add in.
	//             numberAdd - The number of the add text that you
	//                      want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int positionSource, int numberSource, const char *text, int numberAdd);
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
	HtString &replace(int positionSource, int numberSource, const HtString &text, int positionAdd, int numberAdd);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             count - The number of the text's size.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, int count, char text);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const char *text);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: startSource - The source's string start iterator.
	//             endSource - The source's string end iterator.
	//             startAdd - The add's string start iterator.
	//             endAdd - The add's string end iterator.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator startSource, HtStringIterator endSource, HtStringIterator startAdd, HtStringIterator endAdd);
	// ----------------------------------------------------------------------------------------
	// @Description: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text that you want to add in.
	//             count - The size of the add's text.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const char *text, int count);
	// ----------------------------------------------------------------------------------------
	// @Description: Get the part of the text.
	// @Parameter: position - The start index of  the text.
	//             end - The end index of the text.
	// ----------------------------------------------------------------------------------------
	HtString subText(int position, int end);

public:
	// ----------------------------------------------------------------------------------------
	// @Description: Clear the string.
	// ----------------------------------------------------------------------------------------
	void clear();

private:
  std::string string;
};

#endif								// HETGUI_CORE_STL_HTSTRING_H
