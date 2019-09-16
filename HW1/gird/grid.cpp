/*
James Davis
CS201
September 14th
grid.cpp
This program will create a 10 by 10 grid, then allow users to put Xs in grid locations
*/

#include <iostream>
#include <string>

int main()
{
	//creating grid
	string grid[10][10];
	
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			grid[i][k] = "[ ]";
		}
	}

	//user input
	std::cout << "To end at any time, enter '0' for row and/or collumn\n\n";

	int j = 2;
	while (j == 2)
	{
		//illustration of grid
		for (int i = 0; i < 10; i++)
		{
			for (int k = 0; k < 10; k++)
			{
				std::cout << grid[i][k];
			}
		}
		std::cout << "\n\n";
		int row;
		int col;

		//input
		std::cout << "Where would you like to mark on the frid?\n";
		std::cout << "Enter row choice:\n";
		std::cin >> row;
		row--;
		std::cout << "Enter collumn choice:\n";
		std::cin >> col;
		col--;

		//checks if user wants to end
		if (row == -1 || col == -1)
		{
			std::cout << "Program has been ended.\n";
			break;

			std::cout << "Final grid:";
			for (int i = 0; i < 10; i++)
			{
				for (int k = 0; k < 10; k++)
				{
					std::cout << grid[i][k];
				}
			}
		}

		grid[row][col] = "[X]";
	}
}