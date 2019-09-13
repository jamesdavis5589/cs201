/*
James Ddavis
September 13th
CS201
Lab5.cpp
This function will
*/

#include <iostream>

int main()
{
	int x;
	std::cout << "Please enter an integer\n";
	std::cin >> x;

	switch (x % 3)
	{
	case 0:
		std::cout << "Input is a multiple of 3";
		break;
	case 1:
		std::cout << "Input isn't a multiple of 3, 1 remainder";
		break;
	case 2:
		std::cout << "Input is not a multiple of 3, 2 remainder";
		break;
	}
}