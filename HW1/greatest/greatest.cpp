/*
James Davis
CS201
September 13th
HW! - greatest.cpp
This program will
*/

#include <iostream>

int main()
{
	int x;
	int big=1;
	int i = 24;

	while(i!=0)
	{
		std::cout << "Please enter an integer, or enter 0 to end\n";
		std::cin >> x;

		if (x > big)
			big = x;

		if (x <= 0)
			break;
	}

	std::cout << "The largest integer you entered was ";
	std::cout << big;
}