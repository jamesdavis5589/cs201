/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding temperature
*/

#pragma once

//Checks first letter to mitigate spelling errors, then carries out conversion

//Temperature
double Cto(std::string s, double x)
{
	//to kelvin
	if (s[0] == 'k')
		return x + 273.15;

	//to Farenheit
	if (s[0] == 'f')
		return x * (9 / 5) + 32;
}

double Kto(std::string s, double x)
{
	//to celsius
	if (s[0] == 'c')
		return x - 273.15;

	//to farenheit
	if(s[0]=='f')
	return (x - 273.15) * (9 / 5) + 32;
}

double FtoC(std::string s, double x)
{
	//to celsius
	if (s[0] == 'c')
		return (x - 32) / (9 / 5);

	//to kelvin
	if(s[0]=='k')
	return (x - 32) / (9 / 5) - 273.15;
}
