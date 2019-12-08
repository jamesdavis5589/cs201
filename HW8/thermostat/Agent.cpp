/*
James Davis
December 7th
CS201
HW8 - Agent.cpp
This program will define class Agent
*/

#include "Agent.h"

Agent::Agent() :
	temp(0),
	goal(0),
	hot(false)
{}

Agent::Agent(int t, int g) :
	temp(t),
	goal(g),
	hot(false)
{}

void Agent::percieve(Environment e)
{
	temp = e.getTemp();
}

void Agent::setGoal(int g)
{
	goal = g;
}

void Agent::think()
{
	if (temp < goal)
	{
		hot = true;
	}
	else
	{
		hot = false;
	}
}

void Agent::act(Environment e)
{
	if (act)
	{
		e.setHeater(true);
	}
	else
	{
		e.setHeater(false);
	}
}