/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will hold the conversion functions regarding lengths
*/

#pragma once

double MtoMM(double x)
{
	return .001 * x;
}

double MtoCM(double x)
{
	return .01 * x;
}

double MtoKM(double x)
{
	return 1000 * x;
}
