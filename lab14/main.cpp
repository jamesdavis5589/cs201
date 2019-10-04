/*
James Davis
CS201
October 4th
lab 14 - main.cpp
this program will
*/

#include "header.h"

int main()
{
	std::string s;

	std::cout << "Hello, please enter your word of choice:\n";
	std::cin >> s;

	std::cout << "\n\n";
	shrink(s);
}