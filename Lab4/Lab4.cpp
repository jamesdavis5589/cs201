/*
James Davis
September 11th
CS201
Lab4.cpp
This program will print out 1-100, with divisibles of 3 and 5 being replaced with "Fizz" and "Buzz" respectively, or "Fizz Buzz" if it's divisible by both
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