/*
James Davis
CS201
September 25th
lab10.cpp
Tjis program will
*/

#include <iostream>
#include "lab10.h"

int main()
{
	//isDiv3()
	std::cout << "Testing isDiv3():\n";
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i) == true)
		{
			std::cout << i << "\n";
		}
	}
	std::cout << "\n\n";

	//isAdivB()
	std::cout << "Testing isAdivB():\n";
	int x;
	int y;
	std::cout << "Size:\n";
	std::cin >> x;
	std::cout << "Divisible:\n";
	std::cin >> y;
	std::cout << "\n";

	isAdivB(x, y);

	return 0;
}