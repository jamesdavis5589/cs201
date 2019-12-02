/*
James Davis
September 29th -> December 1st
CS201
HW3 - boxprint.cpp
This program will utilise and test the box function
*/

#include "boxer.h"

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
	}
	else
		box(word, x);
}