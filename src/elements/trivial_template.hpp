// Import packages from the C++ STL
#include <string>
#include <cstring>
#include <stdio.h>
#include <utility>
#include <limits.h>			// For std::LONG_MIN


#ifndef __TRIVIAL_TEMPLATE_H
#define __TRIVIAL_TEMPLATE_H
using namespace std;

template <typename T>
class trivial_template {
	public:
		trivial_template();
		~trivial_template();
		static bool is_non_negative(T a_num);
		T square_given_number(T a_num);
};
#endif

