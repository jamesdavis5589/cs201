/*
James Davis
December 7th
CS201
HW8 - Environment.h
This program will house prototypes for class Environment
*/

#ifndef Environment_h
#define Environment_h

#include "Agent.h"

class Environment {
	int temp;
	bool heater;

public:
	Environment();
	Environment(int t);

	void iteration();

	int getTemp();
	bool getHeater();
	void setHeater(bool b);
};

#endif