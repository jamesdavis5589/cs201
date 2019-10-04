/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding temperature
*/

#pragma once

//Temperature
double CtoK(double x)
{
	return x + 273.15;
}

double CtoF(double x)
{
	return x * (9 / 5) + 32;
}

double KtoC(double x)
{
	return x - 273.15;
}

double KtoF(double x)
{
	return KtoC(x) * (9 / 5) + 32;
}

double FtoC(double x)
{
	return (x - 32) / (9 / 5);
}

double FtoK(double x)
{
	return (FtoC(x) - 273.15);
}
