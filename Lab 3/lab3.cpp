/*
James Davis
CS201
September 9th
Lab3.cpp
This program will print out numbers 1-20, as well as print out a 60x10 box
*/

import <iostream>

public main
{
	//print 1-20
	int x = 1;
	while (x <= 20)
	{
		cout << x
		x++;
	}

	//print out the box
	int j = 0;
	int k = 0;
	while (j<10)
	{
		while (k < 60)
		{
			if (k % 2 == 0)
				cout << "X";

			if (k % 2 == 1)
				cout << "D";
		}
	}
}