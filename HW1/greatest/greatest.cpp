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
	int big = 0;
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

	if (big == 0)
	{
		std::cout << "No posative integers were entered";
		return 0;
	}

	std::cout << "The largest integer you entered was ";
	std::cout << big;
}