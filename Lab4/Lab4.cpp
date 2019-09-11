/*
James Davis
September 11th
CS201
Lab4.cpp
This program will
*/

#include <iostream>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << "fizz";
		else
			std::cout << i;
		std::cout << "\n";
	}
}