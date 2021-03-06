/**
 * This is written by Zhiyang Ong to test ideas about null pointers.
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2014>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person
 *	obtaining a copy of this software and associated documentation
 *	files (the "Software"), to deal in the Software without
 *	restriction, including without limitation the rights to use, copy,
 *	modify, merge, publish, distribute, sublicense, and/or sell copies
 *	of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 *	included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *	DEALINGS IN THE SOFTWARE.
 * 
 * 
 *
 * @author Zhiyang Ong
 *
 *
 *
 * Notes on number-to-string operations.
 * From \cite{Voigt2010}:
 *	= Avoid string operations.
 *		[Answer to question written by "user434507"]
 *	= Return the result of a function by reference, instead of
 *		return by value.
 *		This avoids an assignment, a constructor, and a destructor.
 *		[Answer to question written by "user434507"]
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * References:
 *	[AnonymousStackOverflowUser2011] Anonymous Stack Overflow user, "Does std::sort check if a vector is already sorted?," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, July 4, 2011. Available online at: \url{http://stackoverflow.com/questions/6567326/does-stdsort-check-if-a-vector-is-already-sorted}; November 20, 2015 was the last accessed date.
 *	[Athanasiou2014] Nikos Athanasiou, "Comparing 3 modern c++ ways to convert integral values to strings," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, May 2, 2014. Available online at: \url{http://stackoverflow.com/questions/23437778/comparing-3-modern-c-ways-to-convert-integral-values-to-strings}; November 20, 2015 was the last accessed date.
 *	[Bancila2014] Marius Bancila, "The standard way of converting between numbers and strings in C++11," from {\it Codexpert -- comunitatea a programatorilor de C++ [i.e., C++ programmers community]: Codexpert -- I see native code}, Codexpert, Romania, April 14, 2014. Available online at: \url{http://codexpert.ro/blog/2014/04/14/standard-way-of-converting-between-numbers-and-strings-in-cpp11/}; November 20, 2015 was the last accessed date.
 *	[Basaglia2009] Mattia Basaglia (Bazzy), "Converting numbers to strings and strings to numbers," in {\it C++ Reference: C++ Forum: Articles}, April 6, 2009. Available online at: \url{http://www.cplusplus.com/forum/articles/9645/}; November 17, 2015 was the last accessed date.
 *	[Basaglia2009a] Mattia Basaglia (Bazzy), response to "Converting numbers to strings and strings to numbers," in {\it C++ Reference: C++ Forum: Articles}, April 7, 2009. Available online at: \url{http://www.cplusplus.com/forum/articles/9645/#msg44792}; November 17, 2015 was the last accessed date.
 *	[Basaglia2009b] Mattia Basaglia (Bazzy), "Converting numbers to strings and strings to numbers," in {\it C++ Reference: Articles}, October 9, 2009 (Updated November 22, 2012). Available online at: \url{http://www.cplusplus.com/articles/D9j2Nwbp/}; November 19, 2015 was the last accessed date.
 *	[caa2010] caa (and wallyk (editor)), answer to the question "How to parse a string to an int in C++?," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, December 1, 2010 (edited August 5, 2011). Available online at: \url{ http://stackoverflow.com/a/4328610} and \url{http://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c/4328610#4328610}; last accessed on November 23, 2015.
 *	[chad2015] chad, comment to an answer by Amith Chinthaka (edited by MC93) for the question "Converting string to integer C," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, September 2, 2015. Available online at: \url{http://stackoverflow.com/a/18763083} and \url{http://stackoverflow.com/questions/7021725/converting-string-to-integer-c/18763083#18763083}; last accessed on November 24, 2015.
 *	[Fridman2011] Lex Fridman, "Sorting a Sorted List in C++," from his web page {\it Lex Fridman: Blogs: Research -- Projects, papers, and miscellaneous programming notes}, 2011. Available online at: \url{http://lexfridman.com/blogs/research/2011/07/04/sorting-a-sorted-list-in-c/}; November 20, 2015 was the last accessed date.
 *	[Gonzalez2009] V{\'{i}}ctor M. Gonz{\'{a}}lez (Helios, or Helios-vmg), answer to the post "," in {\it C++ Reference: C++ Forum: Articles}, June 16, 2009. Available online at: \url{http://www.cplusplus.com/forum/articles/9645/#msg56762}; November 18, 2015 was the last accessed date.
 *	[jk.2008] jk (and Ferruccio Barletta (editor)), answer to the question "How to parse a string to an int in C++?," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, October 11, 2008. Available online at: \url{http://stackoverflow.com/a/194487} and \url{http://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c/194487#194487}; last accessed on November 23, 2015.
 *	[jsmith2009] jsmith, answer to the post "convert between std::string and int," in {\it C++ Reference: C++ Forum: General C++ Programming}, July 31, 2009. Available online at: \url{http://www.cplusplus.com/forum/general/13135/#msg63239}; November 18, 2015 was the last accessed date.
 *	[jsmith2009a] jsmith, answer to the post "Convert integer to string," in {\it C++ Reference: C++ Forum: General C++ Programming}, February 14, 2009. Available online at: \url{http://www.cplusplus.com/forum/beginner/7777/#msg36020}; November 18, 2015 was the last accessed date.
 *	[McMahon2015] Kurt McMahon, "C strings and C++ strings," in {\it Northern Illinois University: College of Engineering and Engineering Technology: Department of Computer Science: CSCI 241 Intermediate Programming in C++ (Fall 2015): Course Notes}, Northern Illinois University, DeKalb, IL, October 28, 2015. Available online at: \url{https://www.prismnet.com/~mcmahon/Notes/strings.html}; November 18, 2015 was the last accessed date.
 *	[Moulding2011] Dan Moulding, answer to the question "How to parse a string to an int in C++?," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, May 27, 2011. Available online at: \url{http://stackoverflow.com/a/6154614} and \url{http://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c/6154614#6154614}; last accessed on November 23, 2015.
 *	[NieminenWXYZ] Juha Nieminen, "Comparison of several sorting algorithms: Conclusion," from {\it Warp} (personal web page). Available online at: \url{http://warp.povusers.org/SortComparison/conclusion.html}; November 20, 2015 was the last accessed date.
 *	[NieminenWXYZa] Juha Nieminen, "Comparison of several sorting algorithms," from {\it Warp} (personal web page). Available online at: \url{http://warp.povusers.org/SortComparison/index.html}; November 20, 2015 was the last accessed date.
 *	[NieminenWXYZb] Juha Nieminen, "Comparison of several sorting algorithms: Integers," from {\it Warp} (personal web page). Available online at: \url{http://warp.povusers.org/SortComparison/integers.html}; November 20, 2015 was the last accessedFridman date.
 *	[Oromis2009] Oromis, answer to the post "Convert integer to string," in {\it C++ Reference: C++ Forum: General C++ Programming}, February 14, 2009. Available online at: \url{http://www.cplusplus.com/forum/beginner/7777/#msg36007}; November 18, 2015 was the last accessed date.
 *	[Partow2014] Arash Partow, "C++ String Toolkit Library (StrTk)," from his personal web page {\it Arash Partow's Website}, 2014. Available online at: \url{http://www.partow.net/programming/strtk/index.html}; last accessed on November 23, 2015. Also, see: Arash Partow, "C++ String Toolkit (StrTk) Tokenizer," from {\it CodeProject -- For those who code: Articles}, CodeProject, Toronto, Canada, January 7, 2014. Available online at: \url{http://www.codeproject.com/Articles/23198/C-String-Toolkit-StrTk-Tokenizer}; last accessed on November 23, 2015.
 *	[spoulson2008] spoulson (author) and "bobobobo" (i.e., William Sherif), answer to "Alternative to itoa() for converting integer to string C++? [duplicate]," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY, October 14, 2008 (edited November 21, 2008w). Available online at: \url{http://stackoverflow.com/a/228039} and \url{http://stackoverflow.com/questions/228005/alternative-to-itoa-for-converting-integer-to-string-c/228039#228039}; November 20, 2015 was the last accessed date.
 *	[StandardCppFoundationContributors2015] Standard C++ Foundation contributors, "How do I convert a value (a number, for example) to a std::string?," from {\it Standard C++: Wiki: C++ FAQ: Miscellaneous Technical Issues}, Standard C++ Foundation, 2015. Available online at: \url{https://isocpp.org/wiki/faq}; last accessed on November 19, 2015.
 *	[SynesisSoftwarePtyLtdStaff2010] Synesis Software Pty Ltd staff, "FastFormat -- The fastest, most robust C++ formatting library," Synesis Software Pty Ltd, Sydney, Australia, June 22, 2010. Available online at: \url{http://www.fastformat.org/} and \url{https://github.com/synesissoftware/FastFormat}; last accessed on November 24, 2015.
 *	[Voigt2010] Ben Voigt, "C++ performance challenge: integer to std::string conversion," Stack Exchange Inc., New York, NY, December 4, 2010. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/questions/4351371/c-performance-challenge-integer-to-stdstring-conversion}; November 17, 2015 was the last accessed date.
 *	[user39259062014] user3925906, answer to the question "How to parse a string to an int in C++?," from {\it Stack Exchange Inc.: Stack Overflow: Questions}, Stack Exchange Inc., New York, NY,  August 9, 2014. Available online at: \url{http://stackoverflow.com/a/25223180} and \url{http://stackoverflow.com/questions/194465/how-to-parse-a-string-to-an-int-in-c/25223180#25223180}; last accessed on November 23, 2015.
 *
 *
 *
 *
 *
 *
 * From my BibTeX database, the citation keys for references that I used are:
 *	Abrahams2015:
 *		http://www.boost.org/doc/libs/1_59_0/doc/html/boost_lexical_cast.html
 *		http://www.boost.org/doc/libs/1_59_0/doc/html/boost_lexical_cast/performance.html
 *			lexical_cast
 *			std::stringstream without construction or scanf/printf
 *			std::stringstream with construction
 */

// Include Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
// Testing operations with the C++ STL set container.
#include <set>
#include <utility>      // std::pair, std::make_pair
// Test string conversion into integers, via stringstream. Required inclusion.
#include <sstream>

// Import modules from the Boost C++ Library.
#include <boost/lexical_cast.hpp>
//#include "boost/lexical_cast.hpp"
// Either of the above two "#include" statements will work.

// Import packages from the software
#include "../../classes/string_node.hpp"


using namespace std;

// =======================================================================

// A good template function for string-to-number conversion. TEST THIS!!!
template <typename T>
T StringToNumber(const string &Text, T defValue = T()) {
	stringstream ss;
	for (string::const_iterator i=Text.begin(); i!=Text.end(); ++i) {
		if(isdigit(*i) || *i=='e' || *i=='-' || *i=='+' || *i=='.') {
			ss << *i;
		}
	}
	T result;
	return ss >> result ? result : defValue;
}	// \cite{Basaglia2009a}

/*
Don't use "long"; use unsigned long long int.

	template <typename T>
	long atoi(const std::basic_string<T> &str){
		std::basic_stringstream<T> stream(str);
		long res;
		return !(stream >>res)?0:res;
	}
	// \cite{Gonzalez2009}
*/


bool str2int (int &i, char const *s)
{
	char c;
	std::stringstream ss(s);
	ss >> i;
	if (ss.fail() || ss.get(c)) {
		// not an integer
		return false;
	}
	return true;
}




// The fill() function is not needed by me.
template <typename T>
std::basic_string<T> itoa(long n,unsigned w=0){
	std::basic_stringstream<T> stream;
	if (w){
		stream.fill('0');
		stream.width(w);
	}
	stream <<n;
	return stream.str();
}	// \cite{Gonzalez2009}


// Function to convert a number into a string; \cite{Oromis2009}
string convertInt(int number)
{
	if (number == 0)
		return "0";
	string temp="";
	string returnvalue="";
	while (number>0)
	{
		temp+=number%10+48;
		number/=10;
	}
	for(int i=0; i<temp.length(); i++)
		returnvalue+=temp[temp.length()-i-1];
	return returnvalue;
}

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	
	
	string a_str = "An EECS Ph.D. degree is";
//	string a_str = "An EECS Ph.D. degree is required.";
//	string a_str = "An EECS Ph.D. degree is required for research positions at Intel";
	string b_str = "Before you become a research fellow, you must be a research scientist at Intel";
	string duplicate_str = "An EECS Ph.D. degree is required for research positions at Intel";
	string empty_string_1;
	string empty_string_2 = "";
	/**
	 * From \cite{RebbechiWXYZ}, strings are stored as
	 *	automatically managed dynamic storage.
	 * Test some basic string operations.
	 *
	 * ### IMPORTANT NOTES:
	 * size():	Does not necessarily provide the number of
	 *			characters in the string.
	 *			Indicates size in number of bytes used.
	 *			Synonymous with length().
	 * length(): Does not necessarily provide the number of
	 *			characters in the string.
	 *			Indicates size in number of bytes used.
	 *			Synonymous with size().
	 *
	 * A boolean TRUE is "1" and a boolean false is "0".
	 */
	cout << "==============================================" << endl;
	cout << "	The size of a_str is:::" << a_str.size();
	cout << "===" << endl;
	cout << "	Is a_str empty:::" << a_str.empty() << "===" << endl;
	cout << "	Is empty_string_1 empty:::" << empty_string_1.empty();
	cout << "===" << endl;
	cout << "	Is empty_string_2 empty:::" << empty_string_2.empty();
	cout << "===" << endl;
	cout << "==============================================" << endl;
	a_str = "An EECS Ph.D. degree is required for research positions at Intel";
	string copy_str = a_str;
	string *ptr2str = &a_str;
	
	/**
	 * Using "==" to compare two strings checks if the strings
	 *	point to the same position.
	 * Using strcmp to compare two strings checks if the strings
	 *	have the same content.
	 *
	 * To use strcmp, convert C++ string to C string via ".c_str()".
	 *
	 * Alternatively, use the .compare() function from the C++ STL
	 *	string class to compare two C++ strings.
	 */

	if(0 > a_str.compare(b_str)) {
		cout << "	a_str comes before b_str." << endl;
	}else{
		cout << "	a_str DOES NOT come before b_str." << endl;
	}
	
	if(0 < b_str.compare(duplicate_str)) {
		cout << "	b_str comes after duplicate_str." << endl;
	}else{
		cout << "	b_str DOES NOT come after duplicate_str." << endl;
	}
	
	if(0 == a_str.compare(duplicate_str)) {
		cout << "	a_str is equal to duplicate_str." << endl;
	}else{
		cout << "	a_str IS NOT equal to duplicate_str." << endl;
	}
	
	/**
	 * Changing a copy of a string does not affect the original
	 *	string.
	 */
	copy_str = "A basketball player is tall.";
	cout << "	copy_str is:::" << copy_str << "===" << endl;
	cout << "	a_str is:::" << a_str << "===" << endl;
	/**
	 * When you change the contents of the location that a
	 *	pointer is pointing to, you change the contents of
	 *	the original string.
	 * The contents of the pointer is assigned to the
	 *	address/location of a static/instance variable.
	 */
	(*ptr2str) = "I love the NBA.";
	cout << "	*ptr2str is:::" << (*ptr2str) << "===" << endl;
	cout << "	a_str is:::" << a_str << "===" << endl;
	
	// Declaring multiple variables at once. OK.
	string_node node_a, node_b, node_c;
	
	/**
	 * Does not work.
	 * node_d is of the type/class "string_node", and cannot
	 *	be cast into a "string".
	 */
	//string_node node_d = string("Ciao", "Mondo");
	//string_node node_d = string("Ciao".c_str(), "Mondo".c_str());
	//string_node node_d = string(a_str.c_str(), b_str.c_str());
	string_node node_d = string_node(a_str, b_str);
	// The following works.
	string_node node_e = string_node("Ciao", "Mondo");
	string_node node_f = string_node(a_str.c_str(), b_str.c_str());
	
	cout << "==============================================" << endl;
	
	/**
	 * Create a set of string_nodes.
	 * This includes adding duplicates to set the insert operation.
	 */
	set<string_node> set_sn;
	// Insert the string_node object #1.
	pair<set<string_node>::iterator, bool> set_op_flag
		= set_sn.insert(string_node("Il Signore è il mio pastore","non manco di nulla"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:1." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:1." << endl;
	}
	// Insert the string_node object #2.
	set_op_flag
		= set_sn.insert(string_node("su pascoli erbosi mi fa riposare","ad acque tranquille mi conduce"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:2." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:2." << endl;
	}
	// Insert the string_node object #3.
	set_op_flag
		= set_sn.insert(string_node("Mi rinfranca, mi guida per il giusto cammino","per amore del suo nome"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:3." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:3." << endl;
	}
	// Insert the string_node object #4.
	set_op_flag
		= set_sn.insert(string_node("Se dovessi camminare in una valle oscura","non temerei alcun male, perché tu sei con me"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:4a." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:4a." << endl;
	}
	// Insert the string_node object #5.
	set_op_flag
		= set_sn.insert(string_node("Il tuo bastone e il tuo vincastro","mi danno sicurezza"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:4b." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:4b." << endl;
	}
	// Insert the string_node object #6.
	set_op_flag
		= set_sn.insert(string_node("Davanti a me tu prepari una mensa","sotto gli occhi dei miei nemici"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:5a." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:5a." << endl;
	}
	// Insert the string_node object #7.
	set_op_flag
		= set_sn.insert(string_node("cospargi di olio il mio capo","Il mio calice trabocca"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:5b." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:5b." << endl;
	}
	// Insert the string_node object #8.
	set_op_flag
		= set_sn.insert(string_node("Felicità e grazia mi saranno compagne","tutti i giorni della mia vita"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:6a." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:6a." << endl;
	}
	// Insert the string_node object #9.
	set_op_flag
		= set_sn.insert(string_node("e abiterò nella casa del Signore","per lunghissimi anni"));
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed for Psalm 23:6b." << endl;
	}else{
		cout << "	= Insertion operation failed for Psalm 23:6b." << endl;
	}
	// Try to insert duplicate of string_node object #7.
	set_op_flag
		= set_sn.insert(string_node("cospargi di olio il mio capo","Il mio calice trabocca"));
	if(set_op_flag.second) {
		cout << "	= Repeated insertion operation for Psalm 23:5b: Failed." << endl;
	}else{
		cout << "	= Repeated insertion operation for Psalm 23:5b: Passed." << endl;
	}
	// Try to insert string_node object with node ID of string_node object #4.
	set_op_flag
		= set_sn.insert(string_node("Se dovessi camminare in una valle oscura","This is a test string."));
	if(set_op_flag.second) {
		cout << "	= Repeated insertion operation for Psalm 23:4a1: Failed." << endl;
	}else{
		cout << "	= Repeated insertion operation for Psalm 23:4a1: Passed." << endl;
	}
	// Try to insert string_node object with node label of string_node object #2.
	set_op_flag
		= set_sn.insert(string_node("This is another test string.","ad acque tranquille mi conduce."));
	if(set_op_flag.second) {
		cout << "	= Repeated insertion operation for Psalm 23:2b: Passed." << endl;
	}else{
		cout << "	= Repeated insertion operation for Psalm 23:2b: Failed." << endl;
	}

	
	cout << "== Set operations work for nodes that use a string as the node ID." << endl;
	cout << "==============================================" << endl;
	
	// =======================================================
	
	// Test string concatenation + string-to-number conversion.

	/**
	 * Convert integers to strings.
	 *
	 * A class "stringstream" is a string buffer/stream that
	 *	can "avoid dropping characters".
	 *
	 * Include header file for stringstream: #include <sstream>
	 *
	 * The inheritance hierarchy for stringstream is:
	 *	# ios_base
	 *	# ios
	 *	# istream + ostream
	 *	# stringstream + fstream 
	 *
	 */
	stringstream ss;
	int prefix = 12345;
	// Pipe a number into the stringstream.
	ss << prefix;
	// Convert contents of the stringstream into a string.
	string prefix_str = ss.str();
	int suffix = 6789;
	// Append another number into the stringstream.
	ss << suffix;
	string suffix_str = ss.str();
	string concatenator = "+";
//	concatenator = "+%^*";
//	concatenator = "gduyasghfiwehjfnKNKBUYTFUYIHJLM@#$%^&*()";
//	concatenator = "gduyasghfiwehj34758FUYIHJLM@#$%^&*()";
//	concatenator = "79423gduyasghfiwehj34758FUYIHJLM@#$%^&*()";
	concatenator = "79423gduyasghfiwehj34758FUYIHJLM@#$%^&*()423423";
	/**
	 * The function atoi() requires a C-string/C-style (or simply
	 *	C string) string.
	 *
	 * If the string does not begin with a number, it will be
	 *	converted to 0.
	 * If the string begins with a number, followed by at least
	 *	one non-numeric character, that number will be converted
	 *	to an integer. The character(s) following this number
	 *	will be ignored.
	 */
	int concatenator_int = atoi(concatenator.c_str());
	cout << "concatenator_int is:::"<<concatenator_int<<"###"<<endl;
	string node_ID_str =  prefix_str + concatenator + suffix_str;
	cout << "== Node ID is:::" << node_ID_str << "###" << endl;
	/**
	 * Integers cannot be concatenated to strings using the
	 *	plus operator.
	 */
	// Empty the stringstream (or string buffer).
	cout << "	test_ss1===" << ss.str() << "+++" << endl;
	ss.str("");		// Statement to empty the stringstream.
	string test_ss = ss.str();
	cout << "	test_ss2===" << test_ss << "+++" << endl;
	ss << 234234535.43253485;
	cout << "	test_ss3===" << ss.str() << "+++" << endl;
	ss.flush();		// Flush cannot empty the stringstream.
	cout << "	test_ss4===" << ss.str() << "+++" << endl;
	// Pipe 2 numbers into the stringstream.
	ss.str("");		// Statement to empty the stringstream.
	ss << "12345 67.89$ 297.30125 microarchitecture superscalar processor 736 29324";
	char third_char;
	int first_int, sixth_int, seventh_int;
	double second_double, fourth_double;
	string fifth_A_string, fifth_B_string, fifth_C_string;
	ss >> first_int >> second_double >> third_char >> fourth_double;
//	ss >> fifth_A_string >> sixth_int >> seventh_int;
	ss >> fifth_A_string >> fifth_B_string >> fifth_C_string >> sixth_int >> seventh_int;
	/**
	 * The above two statements imply that if I do not match
	 *	the instance/static variables with the tokens in the
	 *	stringstream properly, I would get garbage assigned
	 *	to those instance/static variables.
	 * Note that the first of the two statements above this
	 *	block comment has been commented out.
	 */
	cout << "	first_int===" << first_int << "+++" << endl;
	cout << "	second_double===" << second_double << "+++" << endl;
	cout << "	third_char===" << third_char << "+++" << endl;
	cout << "	fourth_double===" << fourth_double << "+++" << endl;
	cout << "	fifth_A_string===" << fifth_A_string << "+++" << endl;
	cout << "	fifth_B_string===" << fifth_B_string << "+++" << endl;
	cout << "	fifth_C_string===" << fifth_C_string << "+++" << endl;
	cout << "	sixth_int===" << sixth_int << "+++" << endl;
	cout << "	seventh_int===" << seventh_int << "+++" << endl;
	
	cout << "==============================================" << endl;
	/**
	 * Using the stringstream to convert strings to numbers.
	 *
	 * Number storing the conversion output as a number
	 */
	int op_num;
	// A number-based string to be converted into a number.
	string a_num = "732486";
	/**
	 * Create a stringstream with the text in a string.
	 * That is, use the standard constructor of stringstream
	 *	to instantiate an instance of stringstream to store
	 *	an array of characters that are part of a string.
	 * \cite{Basaglia2009}
	 */
	stringstream convert_str_to_num(a_num);
	// Did the stringstream pipe its contents to an integer?
	if(!(convert_str_to_num >> op_num)) {
		// No. Assign op_num to a default value of zero.
		op_num = 0;
	}
	/**
	 *	Else, yes.
	 *	The contents of the stringstream is piped to an integer.
	 *
	 *
	 * The function itoa() is not part of the standard C++ STL.
	 * However, it is supported by some compilers.
	 */
	cout << "op_num:::"<<op_num<<"==="<<endl;
	cout << "==============================================" << endl;
	
	/**
	 * Test function that converts numbers into strings.
	 *	# int
	 *	# long
	 *	# long long
	 *	# unsigned
	 *	# unsigned long
	 *	# unsigned long long
	 *	# float
	 *	# double
	 *	# long double
	 *
	 * This to_string() function may be part of C++11 standard,
	 *	and is not supported by compilers not fully compliant
	 *	to the C++11 standard.
	 */
	string a = to_string(19283.7465);
	cout << "#A	:::" << a << "+++" << endl;
	a = to_string(918273645);
	cout << "#B	:::" << a << "+++" << endl;
	// This works.



	/**
	 * Test other functions to convert strings to numbers.
	 *
	 * Test the strtol() function from the C Standard General
	 *	Utilities Library, <cstdlib> (stdlib.h).
	 */
	char str_arr[] = "123456789";
	char *str_arr_end;
	long int l_i = strtol(str_arr,NULL,10);
	l_i = l_i - 6789;
	cout << "1	===" << to_string(l_i) << "+++" << endl;
	unsigned long long int ulli = strtoul(str_arr,NULL,10);
	ulli = ulli - 3000000;
	cout << "2	===" << to_string(ulli) << "+++" << endl;
	char str_arr1[] = "9821317.654343253453421";
	double dxx = strtod(str_arr1,NULL);
	cout << "3	===" << to_string(dxx) << "+++" << endl;
	int an_int = stoi("657483921",nullptr);
	cout << "4	===" << to_string(an_int) << "+++" << endl;
	unsigned long long int an_ulli = stoull("6572348375921",nullptr);
	cout << "5	===" << to_string(an_ulli) << "+++" << endl;
	long double a_ld = stold("743208.483752921",nullptr);
	cout << "6	===" << to_string(a_ld) << "+++" << endl;
	/**
	 * Alternate solutions to convert numbers into strings
	 *	include "lexical_cast" from Boost C++ Libraries.
	 *
	 * These alternate solutions can be encapsulated in
	 *	functions to make the software more modular,
	 *	maintainable, and extensible.
	 *
	 *
	 * Note:
	 * A switch statement can be used to convert a number
	 *	into a string, and vice versa.
	 */
// To be completed.

	cout << "==============================================" << endl;
	cout << "Test string-to-number conversion." << endl;
	string str_start = "7364";
	string str_end;
	int int_start = 92834;
	int int_end;
	stringstream convert_bw_str_int;
	// atoi() requires C++ string to be converted to C string first.
	int_end = atoi(str_start.c_str());
	cout << "	atoi() result:::" << int_end << "===" << endl;
	// Using the stringstream option. \cite{Basaglia2009b}
	convert_bw_str_int << str_start;
	if(!(convert_bw_str_int >> int_end)) {
		int_end = 0;
	}
	cout << "	stringstream() result:::" << int_end << "===" << endl;
	/**
	 * Use the stoi() -type of options, which requires C-style strings as input. \cite{Basaglia2009b}
	 * See user39259062014 and \cite{Moulding2011} for better implementations.
	 *	The former implementation is better.
	 */
	unsigned long long int int_end_ulli = stoull("6572348375921",nullptr);
	cout << "	stoull():::" << to_string(int_end_ulli) << "+++" << endl;
	int_start = stoi("873951291",nullptr);
	cout << "	stoi():::" << to_string(int_start) << "+++" << endl;
	// Use Boost.Lexical_Cast, from the Boost C++ Libraries. \cite{jsmith2009,Basaglia2009b}
	try {
		int x = boost::lexical_cast<int>( "123" );
		cout << "	boost::lexical_cast for int==" << x << ":::" << endl;
	}catch(boost::bad_lexical_cast const&) {
		cout << "Error: input string (integer) was not valid" << endl;
	}
	try {
		double x = boost::lexical_cast<double>( "45678.91239816" );
		cout << "	boost::lexical_cast for double1==" << x << ":::" << endl;
		long double y = boost::lexical_cast<long double>( "45678.91239816" );
		cout << "	boost::lexical_cast for long double1==" << y << ":::" << endl;
		y = boost::lexical_cast<long double>( "98745678.9123" );
		cout << "	boost::lexical_cast for long double2==" << y << ":::" << endl;
		y = boost::lexical_cast<long double>( "987.456789123" );
		cout << "	boost::lexical_cast for long double2==" << y << ":::" << endl;
	}catch(boost::bad_lexical_cast const&) {
		cout << "Error: input string (double) was not valid" << endl;
	}

	/**
	 * ### IMPORTANT NOTE:
	 * Additional notes on converting between numbers and strings:
	 *	= \cite{caa2010}
	 *		Articles already mentioned show comparison between different methods of converting integers <-> strings. Following approaches make sense: old c-way, spirit.karma, fastformat, simple naive loop.
	 *		Boost.Spirit.Karma seems to be the fastest library for converting integer to string.
	 *	= \cite{chad2015}
	 *		C++ (or C-type) functions of the category represented by "atoi" may overflow. Hence the use of these functions must involve the judicious checking of arithmetic overflow.
	 *		C++ functions of the categeory represented by "strtol" do check for arithmetic overflow.
	 *
	 *
	 *
	 *
	 *
	 */

	// -------------------------------------------------

	cout << "Test number-to-string conversion." << endl;
	// Using the stringstream option. \cite{Basaglia2009}
	convert_bw_str_int << int_start;
	str_end = convert_bw_str_int.str();
	cout << "	stringstream() result:::" << str_end << "===" << endl;
	/**
	 * Use the to_string() function.
	 *
	 * This to_string() function may be part of C++11 standard,
	 *	and is not supported by compilers not fully compliant
	 *	to the C++11 standard. \cite{Basaglia2009b}
	 */
	str_end = to_string(int_start);
	cout<<"	to_string():::"<<str_end<<"==="<<endl;
	/**
	 * Use Boost.Lexical_Cast, from the Boost C++ Libraries.
	 *	\cite{jsmith2009a,Basaglia2009b}
	 *
	 * "lexical_cast<Target>(Source) throws bad_lexical_cast on failure."
	 *	\cite{}
	 */
	try {
		string s = boost::lexical_cast<string>(3674.3478);
		cout << "	boost::lexical_cast=" << s << ":::" << endl;
		s = boost::lexical_cast<string>(9374421);
		cout << "	boost::lexical_cast=" << s << ":::" << endl;
	}catch(boost::bad_lexical_cast const&) {
		cout << "Error: input string was not valid" << endl;
	}
	cout << "==============================================" << endl;

	
	/**
	 * Test string concatenation operation.
	 *
	 * Mattia Basaglia, "Cxx-MiscLib," in {\it GitHub: Mattia Basaglia}
	 *	Available online at: \url{http://www.cplusplus.com/forum/articles/9645/};
	 *	last accessed on November 13, 2015.
	 *
	 * Do not proceed.
	 */

	
	
	// End of main function...
	return 0;
}
