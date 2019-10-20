/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding lengths
*/

#include "proto.h"

//Metric
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

double MMto(std::string s, double x)
{
	//to centimeters
	if (s == "cm")
		return x * 10;

	//to meters
	if (s == "m")
		return x * 1000;

	//to kilometers
	if (s == "km")
		return (x * 1000)*1000;

	//to inches

	//to feet

	//to miles
}

double CMto(std::string s, double x)
{
	//to millimeters
	if (s == "mm")
		return x / 10;

	//to meters
	if (s == "m")
		return x * 100;

	//to kilometers
	if (s == "km")
		return (x * 100) * 1000;

	//to inches

	//to feet

	//to miles
}

double KMto(std::string s, double x)
{
	//to millimeters
	if (s == "mm")
		return (x / 1000) / 1000;

	//to centimeters
	if (s == "cm")
		return (x / 1000) / 100;

	//to meters
	if (s == "m")
		return x / 1000;

	//to inches

	//to feet

	//to miles
}

//Imperial
double inchto(std::string s, double x)
{
	//to foot
	if (s == "inch")
		return x * 12;

	//to mile
	if (s == "mile")
		return x * 12 * 5280;

	//to millimeters
	if (s == "mm")
		return (x * .3048) * 12 / 1000;

	//to centimeters
	if(s=="cm")
		return (x * .3048) * 12 / 100;

	//to meters
	if (s == "m")
		return (x * .3048) * 12;

	//to kilometers
	if(s=="km")
		return (x * .3048) * 12 * 1000;
}

double footto(std::string s, double x)
{
	//to inch
	if (s == "inch")
		return x / 12;

	//to mile
	if (s == "mile")
		return x * 5280;

	//to millimeters
	if (s == "mm")
		return (x * .3048) / 1000;

	//to centimeters
	if (s == "cm")
		return (x * .3048) / 100;

	//to meters
	if (s == "m")
		return x * .3048;

	//to kilometers
	if (s == "km")
		return (x * .3048) * 1000;
}

double mileto(std::string s, double x)
{
	//to inch
	if (s == "inch")
		return (x / 5280) / 12;

	//to feet
	if (s == "foot")
		return x / 5280;

	//to millimeters
	if (s == "mm")
		return ((x / 5280) * .3048) / 1000;

	//to centimeters
	if (s == "cm")
		return ((x / 5280) * .3048) / 100;

	//to meters
	if (s == "m")
		return (x / 5280) * .3048;

	//to kilometers
	if (s == "km")
		return (x * .3048) * 1000;
}