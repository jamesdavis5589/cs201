/*
James Davis
CS201
October 23rd
lab21 - main.cpp
This program will take input from the user then convert it into a trunc8 and print it
*/

#include "truncstruct.hpp"
#include <iostream>

int main()
{
	std::string input;
	std::cout << "Please input a string: ";
	std::cin >> input;
	std::cout << "\n\n\n";

	StringInfo x = trunc8(input);
	std::cout << x.str << std::endl;
	std::cout << x.len;
}