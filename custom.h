#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <boost\algorithm\string.hpp>
#include <map>

#ifndef FUNCS_H
#define FUNCS_H

namespace custom
{
	bool is_num(std::string line);

	void to_lower(std::string &randomstring);

	void keep_up();

	bool is_palindrome(std::string userstr);

	std::string trim(std::string str);

	std::string conn(std::vector<std::string> cvec, std::string seperate = "");

	std::vector<int> range(int start, int end, int incval = 1);

	std::vector<std::string> sep(std::string cstring, char seperate = ' ');

	int sum(std::vector<int> uservec);

	bool is_in(std::vector<std::string>, std::string);
}



#endif