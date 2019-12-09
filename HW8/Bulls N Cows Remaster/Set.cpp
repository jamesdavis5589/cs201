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
	d1(rand() % 9)
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