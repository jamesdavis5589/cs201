/*
James Davis
December 7th
CS201
HW8 - Environment.cpp
This program will define class Environment
*/

#include "Environment.h"

Environment::Environment() :
	heater(false),
	temp(0)
{}

Environment::Environment(int t, bool h) :
	heater(h),
	temp(t)
{}

void Environment::iteration()
{
	if (heater)
	{
		temp++;
	}
	else
	{
		temp--;
	}
}