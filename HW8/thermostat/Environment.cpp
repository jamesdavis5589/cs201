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

Environment::Environment(int t) :
	heater(false),
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

int Environment::getTemp()
{
	return temp;
}

bool Environment::getHeater()
{
	return heater;
}

void Environment::setHeater(bool b)
{
	heater = b;
}