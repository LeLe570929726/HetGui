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
// @Descriptionion: HtString's iterator
// ----------------------------------------------------------------------------------------
typedef  HtIterator<std::string::iterator> HtStringIterator;

// ----------------------------------------------------------------------------------------
// @Descriptionion: Use this class to store text. It's based on
//               STL's string.
// ----------------------------------------------------------------------------------------
class HETGUI_CLASS HtString {
public:
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
	// ----------------------------------------------------------------------------------------
	HtString();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
	// @Parameter: text - Initialization text.
	// ----------------------------------------------------------------------------------------
	HtString(const char *text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
	// @Parameter: size - The size of text that you will add.
	//             text - The text that you will add.
	// ----------------------------------------------------------------------------------------
	HtString(int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
	// @Parameter: other - The other HtString object.
	// ----------------------------------------------------------------------------------------
	HtString(const HtString &other);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
	// @Parameter: other - The other HtString object.
	// ----------------------------------------------------------------------------------------
	HtString(HtString &&other);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: HtString's constructor.
  // ----------------------------------------------------------------------------------------
  ~HtString();

public:
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - Compare with this HtString object and
  //                    the text.
	// ----------------------------------------------------------------------------------------
  bool operator!=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - Compare with this HtString object and
  //                    the text.
  // ----------------------------------------------------------------------------------------
  bool operator!=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Add the new text into the source text.
  // @Parameter: text - The text that you want to add in.
  // ----------------------------------------------------------------------------------------
  HtString &operator+=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Add the new text into the source text.
  // @Parameter: text - The text that you want to add in.
  // ----------------------------------------------------------------------------------------
  HtString &operator+=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator<=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(const char *other);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(const HtString &other);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Set the source text to the new text.
  // @Parameter: other - The other text or HtString object.
  // ----------------------------------------------------------------------------------------
  HtString &operator=(HtString &&other);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator==(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator==(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>=(const char *text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Compare this HtString object and input text.
  // @Parameter: text - The text that you want to compare.
  // ----------------------------------------------------------------------------------------
  bool operator>=(const HtString &text);
  // ----------------------------------------------------------------------------------------
  // @Descriptionion: Get a single text by index.
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
	//             postion - The start of the text.
	//             number - The length of the text.
	// ----------------------------------------------------------------------------------------
	HtString &append(const HtString &text, int position, int number);
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
  // @Descriptionion: Get a single text by index.
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
//             postion - Copies the start of text.
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
	// @Descriptionion: Get the begin iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator begin();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the end iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator end();

public:
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the length of the string.
	// ----------------------------------------------------------------------------------------
	int length();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the size of the string.
	// ----------------------------------------------------------------------------------------
	int size();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the max size of the string.
	// ----------------------------------------------------------------------------------------
	int maxSize();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Resize the string.
	// @Parameter: size - The new size.
	// ----------------------------------------------------------------------------------------
	void resize(int size);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Resize the string.
	// @Parameter: size - The new size.
	//             text - Use this text to fill the rest part of the string.
	// ----------------------------------------------------------------------------------------
	void resize(int size, char text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: To determine whether the string is empty.
	// ----------------------------------------------------------------------------------------
	int empty();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the capacity of the string.
	// ----------------------------------------------------------------------------------------
	int capacity();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the std string object.
	// ----------------------------------------------------------------------------------------
	std::string stdString();
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Get the c-style text.
	// ----------------------------------------------------------------------------------------
	const char *constData();

public:
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Push the text behind the source string.
	// @Parameter: text - The text that you will push it behind
	//                    the source string.
	// ----------------------------------------------------------------------------------------
	void pushBack(const char *text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Push the text behind the source string.
	// @Parameter: text - The text that you will push it behind
	//                    the source string.
	// ----------------------------------------------------------------------------------------
	void pushBack(const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Remove a part of text.
	// @Parameter: position - The start index.
	//             end - The end index.
	// ----------------------------------------------------------------------------------------
	HtString &remove(int position, int end);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Remove a part of text.
	// @Parameter: position - The text's iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator remove(HtStringIterator position);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Remove a part of text.
	// @Parameter: position - The start text's iterator.
	//             end - The end text's iterator.
	// ----------------------------------------------------------------------------------------
	HtStringIterator remove(HtStringIterator position, HtStringIterator end);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, const char *text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: positionSource - The source text's start index.
	//             numberSource - The number of the source text that
	//                      you want to replace.
	//             text - The text you want to add in.
	//             numberAdd - The number of the add text that you
	//                      want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int positionSource, int numberSource, const char *text, int numberAdd);
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
	HtString &replace(int positionSource, int numberSource, const HtString &text, int positionAdd, int numberAdd);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: position - The start text's index.
	//             number - The number of the text that you want to
	//                      replace.
	//             count - The number of the text's size.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(int position, int number, int count, char text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const char *text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text you want to add in.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const HtString &text);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: startSource - The source's string start iterator.
	//             endSource - The source's string end iterator.
	//             startAdd - The add's string start iterator.
	//             endAdd - The add's string end iterator.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator startSource, HtStringIterator endSource, HtStringIterator startAdd, HtStringIterator endAdd);
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Replace a part of text.
	// @Parameter: start - The start iterator.
	//             end - The end iterator.
	//             text - The text that you want to add in.
	//             count - The size of the add's text.
	// ----------------------------------------------------------------------------------------
	HtString &replace(HtStringIterator start, HtStringIterator end, const char *text, int count);

public:
	// ----------------------------------------------------------------------------------------
	// @Descriptionion: Clear the string.
	// ----------------------------------------------------------------------------------------
	void clear();

private:
  std::string string;
};
