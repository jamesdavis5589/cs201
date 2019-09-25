/*
James Davis
CS201
September 23rd
Lab 9 - modifyStringMain.cpp
This program will execute examples of the function created in the modifyString header
*/

#include <iostream>
#include <string>
#include "modifyString.h"

int main()
{
	std::cout << "Trial 1:\n";
	std::string a = "diddly";
	std::cout << "Length: ";
	std::cout << exy(4, a);
	std::cout << "\n";
	std::cout << a;
	std::cout << "\n\n";

	std::cout << "Trial 2:\n";
	std::string b = "trainwreck";
	std::cout << "Length: ";
	std::cout << exy(12, b);
	std::cout << "\n";
	std::cout << b;
	std::cout << "\n\n";

	std::cout << "Trial 3:\n";
	std::string c = "shazam";
	std::cout << "Length: ";
	std::cout << exy(25, c);
	std::cout << "\n";
	std::cout << c;
	std::cout << "\n\n";
}