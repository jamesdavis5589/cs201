/*
James Davis
December 8th
CS201
HW8 - vacuum - Environment.cpp
This program will
*/

#include "Environment.h"

Environment::Environment() :
	clean(true)
{}

Environment::Environment(bool c) :
	clean(c)
{}

bool Environment::getClean()
{
	return clean;
}

void Environment::setClean(bool b)
{
	clean = b;
}