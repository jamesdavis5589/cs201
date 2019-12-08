/*
James Davis
December 8th
CS201
HW8 - vacuum - Agent.h
This program will house prototypes for Agent
*/

#ifndef Agent_h
#define Agent_h

#include "Environment.h"
#include "Agent.h"

#include <vector>
using std::vector;

class House
{
	vector<Environment> rooms;

public:
	House();
	House(int r);
};

#endif