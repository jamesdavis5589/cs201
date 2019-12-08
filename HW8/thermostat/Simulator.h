/*
James Davis
December 7th
CS201
HW8 - Simulator.h
This program will house prototypes for class Simulator
*/

#ifndef Simulator_h
#define Simulator_h

#include "Agent.h"
#include "Environment.h"

class Simulator {
	

public:
	Simulator();

	void askOwner();
	void run();
};

#endif
