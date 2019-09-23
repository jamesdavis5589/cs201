/*
James Davis
CS201
September 23rd
Lab 9 - modifyString.h
This program will
*/

#pragma once

#include <string>
#include <iostream>

int exy(int x, std::string & y)
{
	for (int i = 0; i < x; i++)
	{
		y = y + "X";
	}

	return y.size();
}
