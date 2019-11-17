/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding temperature
*/

#include "proto.h"

string TempError = "Temperature Unit Error";

//Temperature
double Cto(int t, double x)
{
	if (t > 3)
	{
		cout << TempError;
		return 0;
	}

	//to kelvin
	if (t == 3)
		return x + 273.15;

	//to Farenheit
	if (t == 1)
		return x * (9 / 5) + 32;

	return 0;
}

double Kto(int t, double x)
{
	if (t > 3)
	{
		cout << TempError;
		return 0;
	}

	//to celsius
	if (t == 2)
		return x - 273.15;

	//to farenheit
	if (t == 1)
		return (x - 273.15) * (9 / 5) + 32;

	return 0;
}

double Fto(int t, double x)
{
	if (t > 3)
	{
		cout << TempError;
		return 0;
	}

	//to celsius
	if (t == 2)
		return (x - 32) / (9 / 5);

	//to kelvin
	if (t == 3)
		return (x - 32) / (9 / 5) - 273.15;

	return 0;
}
