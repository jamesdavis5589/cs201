/*
James Davis
December 8th
CS201
HW8 - vacuum - Agent.cpp
This program will
*/

#include "Agent.h"

Agent::Agent() :
	toDo(false),
	clean(true)
{}

void Agent::look(Environment e)
{
	clean = e.getClean();
}

void Agent::think()
{
	if (!clean)
	{
		toDo = true;
	}
}

void Agent::act(Environment &e)
{
	if (toDo)
	{
		e.setClean(true);
	}
	else
	{

	}
}