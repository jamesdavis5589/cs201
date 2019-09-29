/*
James Davis
CS201
September 28th
HW3 - collatz.cpp
This program will
*/

#include <iostream>

void collatz(int x)
{
	while (x)
	{
		if (x == 1)
		{
			std::cout << x;
			break;
		}
		else if (x % 2 == 0)
		{
			std::cout << x << ", ";
			x = x / 2;
		}
		else
		{
			std::cout << x << ", ";
			x = x * 3 + 1;
		}
	}
}

int main() 
{
	int x;

	std::cout << "Please enter an input for the Collatz Function:\n";
	std::cin >> x;
	std::cout << "\n";

	if (x < 0)
	{
		std::cout << "ERROR: Please enter a posative integer:\n\n\n";
		main();
	}

	collatz(x);
	std::cout << "\n\n";

	char c;
	std::cout << "Would you like to go again?(y/n)\n";
	std::cin >> c;
	if (c == 'y')
		main();
}