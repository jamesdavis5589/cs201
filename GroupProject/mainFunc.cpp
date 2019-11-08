/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

void abrvt(std::string& s)
{
	if (s == "millimeters")
		s = "mm";
	if (s == "centimeters")
		s = "cm";
	if (s == "meters")
		s = "m";
	if (s == "kilometers")
		s = "km";
}

std::string setType(std::string s)
{
	if (s[0] == 'f' || s[0] == 'c' || s[0] == 'k')
		return "temp";


	if (s == "cm" || s == "mm" || s == "m" || s == "km")
		return "length";

	if (s == "inches" || s == "feet" || s == "miles")
		return "length";

	return "ERROR";
}