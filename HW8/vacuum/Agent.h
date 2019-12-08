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

class Agent
{
	bool toDo;
	bool clean;
	bool move;

public:
	int position;

	Agent();
	Agent(int p);

	void look(Environment e);
	void think();
	void act(Environment &e);
};

#endif
