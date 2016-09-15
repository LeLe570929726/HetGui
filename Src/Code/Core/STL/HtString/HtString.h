 // ----------------------------------------------------------------------------------------
 // Copyright © 2016 LeLe570929726. All rights reserved.
 //
 // @Project: HetGui
 // @License: Licensed under GNU General Public License v3.
 // @Craete: 2016/9/3 by LeLe570929726
 // ----------------------------------------------------------------------------------------

#include "../../Global/HtGlobal/HtGlobal.h"
#include "../../STL/HtIterator/HtIterator.h"
#include <string>

// ----------------------------------------------------------------------------------------
// @Description: HtString's iterator
// ----------------------------------------------------------------------------------------
typedef  HtIterator<std::string::iterator> HtStringIterator;

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
  // @Descript: Append some text on the back of the source
  //            text.
  // @Parameter: text - The text that you want to add the back
  //                    of the source text.
  // ----------------------------------------------------------------------------------------
  HtString &append(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descript: Append some text on the back of the source
  //            text.
  // @Parameter: text - The text that you want to add the back
  //                    of the source text.
  // ----------------------------------------------------------------------------------------
  HtString &append(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Description: Get a single text by index.
  // @Parameter: index - The index of the text.
  // ----------------------------------------------------------------------------------------
  const char at(int index);

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
	// @Description: Get the std string object.
	// ----------------------------------------------------------------------------------------
	std::string stdString();

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
	// @Parameter: position - The start text's iterator.
	//             end - The end text's iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator remove(HtStringIterator position, HtStringIterator end);
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

private:
  std::string string;
};
