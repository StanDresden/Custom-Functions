#include "custom.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <algorithm>

namespace custom
{
	bool is_num(std::string line) {
	bool isnum = true;
	int decimalpoint = 0;
	for (unsigned int i = 0; i < line.length(); ++i) {

		if (isdigit(line[i]) == false) {
			if (line[i] == '.') {
				++decimalpoint;  // Checks if the input has a decimal point that is causing the error.
			} 

			else {
				isnum = false;
				break;
			}
		}
	}
	if (decimalpoint > 1) // If it has more than one decimal point.
		isnum = false;
	return isnum;
	}

	int sum(std::vector<int> uservec)
	{
	int sum = 0;
	for (auto i : uservec) sum += i;
	return sum;
	}
	
	bool is_in(std::vector<std::string> uservec, std::string userstr) {
	bool found = false;
	for (auto x : uservec) {
		if (x == userstr) found = true;
	}
	return found;
}

	std::string trim(std::string str) // Trims whitespaces.
{
	std::string newstr = "";
	for (char i : str) if (i != ' ') newstr = newstr + i;
	return newstr;
}

	void to_lower(std::string &randomstring) { // Makes the string lower-case.
	randomstring = boost::algorithm::to_lower_copy(randomstring);
}

	bool is_palindrome(std::string userstr)
{
	std::string newstr = boost::algorithm::to_lower_copy(userstr);
	std::string reversestr = "";
	for (int i = newstr.size() - 1; i >= 0; --i)
		reversestr = reversestr + newstr[i];

	if (reversestr == newstr)
		return true;
	else return false;
}

	void keep_up() {
	std::cout << "Press enter to exit...\n";
	std::string notclosing;
	getline(std::cin, notclosing);
}

	std::vector<int> range(int start, int end, int incval) { // Gets numbers in range.
	std::vector<int> arr;
	for (int i = start; i <= end; i = i + incval) {
		arr.push_back(i);
	}
	return arr;
}

	std::vector<std::string> sep(std::string cstring, char seperate) {
	std::vector<std::string> seperated;
	std::stringstream stream(cstring);
	std::string pieces = "";
	while (getline(stream, pieces, seperate)) {
		seperated.push_back(pieces);
	}
	return seperated;
}

	std::string conn(std::vector<std::string> cvec, std::string connect) {
	std::string connected = "";
	for (auto i : cvec) connected += i + connect;
	return connected;
}

}





