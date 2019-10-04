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
	if (s == "cm")
		return .001 * x;

	//to centimeters
	if (s == "cm")
		return .01 * x;

	//to kilometers
	if (s == "km")
		return 1000 * x;
}