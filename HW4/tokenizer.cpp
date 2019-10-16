/*
James Davis
CS201
October 15th
HW4 - tokenizer.cpp
This program will
*/

#include "tokenizer.h"

int digit(int x)
{
	int digit = 1;

	if (x == 0)
		return 0;

	for (int i = 10; i < x; i + 10)
	{
		digit++;

		if (x <= 10 * i)
			break;
	}
	return digit;
}

bool ReadLine(std::string& str)
{
	std::getline(std::cin, str);

	if (str != "")
		return true;

	return false;
}

unsigned stringToTokenWS(std::vector <std::string>& tokens)
{
	int tt = 0;

	for (std::string s : tokens)
	{
		std::istringstream v(s);
		int x;

		v >> x;

		tt + digit(x);
	}
	
	return tt;
}

void analyzeTokens(const std::vector <std::string>& tokens)
{

}