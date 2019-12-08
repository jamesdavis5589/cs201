/*
James Davis
December 8th
CS201
HW8 - vacuum - Agent.h
This program will
*/

#ifndef Agent_h
#define Agent_h

#include "Environment.h"

class Agent
{
	bool toDo;
	bool clean;

public:
	Agent();

	void look(Environment e);
	void think();
	void act(Environment &e);
};

#endif
