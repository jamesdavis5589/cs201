/*
James Davis
September 29th
CS201
HW3 - boxprint.cpp
This program will utilise and test the box function
*/

#include "boxer.h"
#include <iostream>

int main()
{
	int x;
	std::string word;

	std::cout << "Please enter phrase:\n";
	std::cin >> word;
	std::cout << "Please enter box size:\n";
	std::cin >> x;
	std::cout << "\n\n";

	if (x < 0)
	{
		std::cout << "ERROR: Please enter a posative integer:";
		main();
	}

	box(word, x);

	char c;
	std::cout << "\n\n\nWould you like to continue? (Y/N)\n";
	std::cin >> c;

	if (c == 'Y')
		main();
}