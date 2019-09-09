/*
James Davis
CS201
September 9th
Lab3.cpp
This program will print out numbers 1-20, as well as print out a 60x10 box
*/

#include <iostream>

int main()
{
	//print 1-20
	int x = 1;
	while (x <= 20)
	{
		std::cout << x;
		x++;
	}
	std::cout << "\n";

	//print out the box
	int j = 0;
	int k = 0;
	while (j<10)
	{
		if (j % 2 == 0)
		{
			while (k < 60)
			{
				if (k % 2 == 0)
					std::cout << "X";

				if (k % 2 == 1)
					std::cout << "D";
				k++;
			}
		}
		if(j%2==1)
		{
			while (k < 60)
			{
				if (k % 2 == 0)
					std::cout << "D";

				if (k % 2 == 1)
					std::cout << "X";
				k++;
			}
		}
		j++;
	}
}