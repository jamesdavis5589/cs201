/*
James Davis
December 7th
CS201
HW8 - Agent.h
This program will house prototypes for class Agent
*/

#ifndef Agent_h
#define Agent_h

#include "Simulator.h"
#include "Agent.h"

class Agent {
	int temp;
	int goal;
	bool hot;

public:
	Agent();
	Agent(int t, int g);

	void setGoal(int g);

	void percieve(Environment e);
	void think();
	void act(Environment e);
};

#endif