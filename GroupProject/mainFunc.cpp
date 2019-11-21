/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

//Prints out available units with their correlating integers
void printChart()
{
	cout << "Temperatures:" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << units[i - 1] << " - " << i << endl;

		if (i == 4)
		{
			cout << "\nLengths:" << endl;
		}
	}
}