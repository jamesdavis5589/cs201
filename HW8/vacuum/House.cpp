/*
James Davis
December 8th
CS201
HW8 - vacuum - Agent.cpp
This program will define House
*/

#include "House.h"
#include <cmath>

House::House() :
	vacuum()
{
	rooms.push_back(Environment());
}

House::House(int r)
{
	for (int i = 0; i < r; i++)
	{
		//coin flip
		int c = rand() % 2 + 1;

		if (c == 1)
		{
			//clean room
			rooms.push_back(Environment(true));
		}
		else
		{
			//dirty room
			rooms.push_back(Environment(false));
		}
	}
}

void House::turn()
{
	
}