/*
James Davis
CS201
October 7th
lab15 - Source.cpp
This program will define any functions created in the header
*/

#include "Header.h"

int pnum(std::string s)
{
	std::istringstream z(s);
	int x;
	z >> x;
	return x;
}