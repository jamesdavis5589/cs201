/*
James Davis
December 1st
CS201
HW6 - Shopping - shop.cpp
This program will define functions
*/

#include "shop.h"

void add(record r, int i)
{
	r.setUnits(r.getUnits() + i);
}

void remove(record r, int i)
{
	r.setUnits(r.getUnits() - i);
	
	if (r.getUnits() < 0)
	{
		r.setUnits(0);
	}
}