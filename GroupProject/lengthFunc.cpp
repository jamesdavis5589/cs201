/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - lengthFunc.h
This program will hold the conversion functions regarding lengths
*/

#include "proto.h"

//Define all length conversions
double Mto(int t, double x)
{
	//Check that only length units are being called
    if (t < 4 || t > 10)
	{
		return 0;
	}

	//to millimeters
	if (t == 4)
		return x * 1000;

	//to centimeters
	if (t == 5)
		return 100 * x;

	//to kilometers
	if (t == 7)
		return x / 1000;

	//to inches
	if (t == 8)
		return (x / .3048) / 12;

	//to feet
	if (t == 9)
		return x / .3048;

	//to miles
	if (t == 10)
		return (x / .3048) / 5280;

	return 0;
}

double MMto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to centimeters
	if (t == 5)
		return x / 10;

	//to meters
	if (t == 6)
		return x / 1000;

	//to kilometers
	if (t == 7)
		return (x / 1000) / 1000;

	//to inches
	if (t == 8)
		return (x / .3048) * 12 / 1000;

	//to feet
	if (t == 9)
		return x / .3048 / 1000;

	//to miles
	if (t == 10)
		return (x / .3048) / 5280 / 1000;

	return 0;
}

double CMto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to millimeters
	if (t == 4)
		return x * 10;

	//to meters
	if (t == 6)
		return x / 100;

	//to kilometers
	if (t == 7)
		return (x / 100) / 1000;

	//to inches
	if (t == 8)
		return ((x / .3048) / 100) * 12;

	//to feet
	if (t == 9)
		return (x / .3048) / 100;

	//to miles
	if (t == 10)
		return ((x / .3048) / 100) / 5280;

	return 0;
}

double KMto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to millimeters
	if (t == 4)
		return (x * 1000) * 1000;

	//to centimeters
	if (t == 5)
		return (x * 1000) * 100;

	//to meters
	if (t == 6)
		return x * 1000;

	//to inches
	if (t == 8)
		return ((x / .3048) * 1000) * 12;

	//to feet
	if(t == 9)
		return (x / .3048) * 1000;

	//to miles
	if (t == 10)
		return ((x / .3048) * 1000) / 5280;

	return 0;
}

//Imperial
double inchto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to foot
	if (t == 9)
		return x / 12;

	//to mile
	if (t == 10)
		return x / 12 / 5280;

	//to millimeters
	if (t == 4)
		return (x * .3048) * 12 / 1000;

	//to centimeters
	if(t == 5)
		return (x * .3048) / 12 * 100;

	//to meters
	if (t == 6)
		return (x * .3048) / 12;

	//to kilometers
	if(t == 7)
		return (x * .3048) / 12 / 1000;

	return 0;
}

double footto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to inch
	if (t == 8)
		return x * 12;

	//to mile
	if (t == 10)
		return x / 5280;

	//to millimeters
	if (t == 4)
		return (x * .3048) * 1000;

	//to centimeters
	if (t == 5)
		return (x * .3048) * 100;

	//to meters
	if (t == 6)
		return x * .3048;

	//to kilometers
	if (t == 7)
		return (x * .3048) / 1000;

	return 0;
}

double mileto(int t, double x)
{
	if (t < 4 || t > 10)
	{
		return 0;
	}

	//to inch
	if (t == 8)
		return (x * 5280) * 12;

	//to feet
	if (t == 9)
		return x * 5280;

	//to millimeters
	if (t == 4)
		return ((x * 5280) * .3048) * 1000;

	//to centimeters
	if (t == 5)
		return ((x * 5280) * .3048) * 100;

	//to meters
	if (t == 6)
		return (x * 5280) * .3048;

	//to kilometers
	if (t == 7)
		return (x * .3048) / 1000;

	return 0;
}
