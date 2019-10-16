/*
James Davis
CS201
October 15th
HW4 - tokenizerTest.cpp
This program will test created functions
*/

#include "tokenizer.h"

int main()
{
	std::vector <std::string> mv = {"hello", "abc123", "@@@@", "1234567890"};

	std::cout << "Testing ReadLine():\n";
	for (std::string f: mv)
	{
		ReadLine(f);
		std::cout << "\n";
	}
	std::cout << "\n\n\n\n";

	std::cout << "Testing stringToTokenWS():\n";
	stringToTokenWS(mv);
	std::cout << "\n\n\n\n";

	std::cout << "Testing analyzeTokens():\n";
	analyzeTokens(mv);
}