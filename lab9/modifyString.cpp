/*
James Davis
CS201
September 23rd
Lab 9 - modifyString.cpp
This program will modify the modifyString function
*/

#include "modifyString.h"
#include <string>

int exy(int x, std::string& y)
{
	for (int i = 0; i < x; i++)
	{
		y = y + "X";
	}

	return y.size();
}