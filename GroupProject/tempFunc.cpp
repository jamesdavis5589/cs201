/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding temperature
*/

#include "proto.h"


//Temperature conversion functions
double Cto(int t, double x)
{
	//Check that only temperature units are being called
    if (t > 3)
	{
		return -460.0;
	}

	//to kelvin

	if (t == 3)
		return x + 273.15;

	//to Farenheit
	if (t == 1)
		return x * (1.8) + 32;
    //return impossible temperature if conversion can't be done
	return -460.0;
}

double Kto(int t, double x)
{
	if (t > 3)
	{
		return -460.0;
	}

	//to celsius
	if (t == 2)
		return x - 273.15;

	//to farenheit
	if (t == 1)
		return (x - 273.15) * (1.8) + 32;

	return -460.0;
}

double Fto(int t, double x)
{
	if (t > 3)
	{
		return -460.0;
	}
    
	//to celsius
	if (t == 2)
		return (x - 32) / (1.8);

	//to kelvin
	if (t == 3)
		return (x - 32) / (1.8) + 273.15;

	return -460.0;
}
