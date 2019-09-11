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
		if (i % 5 == 0 && i % 3 == 0)
			std::cout << "Fizz Buzz";
		else if (i % 3 == 0)
			std::cout << "Fizz";
		else if (i % 5 == 0)
			std::cout << "Buzz";
		else
			std::cout << i;

		std::cout << "\n";
	}
}