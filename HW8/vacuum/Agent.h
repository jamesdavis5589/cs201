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
	bool toDo; //if true, room needs cleaning
	bool clean; //is room clean?
	bool move;
	bool direction; //true is right, false is left

public:
	int position;

	Agent();
	Agent(int p);

	void look(Environment e);
	void think();
	void act(Environment &e);
};

#endif 
