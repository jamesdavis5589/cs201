/*
James Davis
December 8th
CS201
HW8 - Bulls N Cows Redo - Set.cpp
This program will define Set
*/

#include "Set.h"

#include <cmath>
using std::rand;

Set::Set() :
	d1(rand() % 9),
	d2(0),
	d3(0),
	d4(0)
{
	bool b = true;

	//Making d2 unique
	while (b)
	{
		d2 = rand() % 9;
		
		if (d2 != d1)
		{
			break;
		}
	}

	//Making d3 unique
	while (b)
	{
		d3 = rand() % 9;

		//Since d2 != d1, you only need to compare d3 to one of them
		if (d3 != d2)
		{
			break;
		}
	}

	//Making d4 unique
	while (b)
	{
		d4 = rand() % 9;

		if (d4 != d3)
		{
			break;
		}
	}
}

vector<int> Set::print()
{
	vector<int> v = {d1, d2, d3, d4};
	return v;
}