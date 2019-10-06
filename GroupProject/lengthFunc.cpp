/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding lengths
*/

#include "proto.h"

double Mto(std::string s, double x)
{
	//to millimeters
	if (s == "mm")
		return .001 * x;

	//to centimeters
	if (s == "cm")
		return .01 * x;

	//to kilometers
	if (s == "km")
		return 1000 * x;
}

double inchto(std::string s, double x)
{
	//to foot
	if (s == "inch")
		return x * 12;

	//to mile
	if (s == "mile")
		return x * 12 * 5280;
}

double footto(std::string s, double x)
{
	//to inch
	if (s == "inch")
		return x / 12;

	//to mile
	if (s == "mile")
		return x * 5280;
}