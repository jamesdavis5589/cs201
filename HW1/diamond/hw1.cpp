/**
 *James Davis
 *September 11th
 *CS201
 *HW1
 *HW1.cpp
 *Diamond program
 *This program will take user input int, then output a diamond shape with a corresponding size
*/

#include <iostream>


int main()
{
	int x;
	std::cout << "Please input an integer\n";
	std::cin >> x;

	if (x < 0)
	{
		std::cout << "Inappropriate integer, please enter a posative integer\n\n";
		main();
	}

	//print out diamond
	int r;
	for (int i = 0; i <= x; i++)
	{
		for (int k = 0; k < x - i; k++)
		{
			std::cout << " ";
		}

		for (int p = 0; p < 2 * i - 1; p++)
		{
			std::cout << "G";
		}
		std::cout << "\n";
		r = i;
	}

	for (int i = r-=1; i > 0; i--)
	{
		for (int k = 0; k < x - i; k++)
		{
			std::cout << " ";
		}

		for (int p = 0; p < 2 * i - 1; p++)
		{
			std::cout << "G";
		}
		std::cout << "\n";
	}

}