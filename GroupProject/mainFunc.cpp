/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

void abrvt(std::string& s)
{
	if (s == "millimeter")
		s = "mm";
	if (s == "centimeter")
		s = "cm";
	if (s == "meter")
		s = "m";
	if (s == "kilometer")
		s = "km";
}

std::string setType(std::string s)
{
	if (s[0] == 'f' || s[0] == 'c' || s[0] == 'k')
		return "temp";


	if (s == "cm" || s == "mm" || s == "m" || s == "km")
		return "length";

	if (s == "inch" || s == "foot" || s == "mile")
		return "length";

	return "ERROR";
}