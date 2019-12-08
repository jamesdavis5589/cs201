/*
James Davis
December 7th
CS201
HW8 - thermostat.cpp
This program will run the main thermostat program
*/

#include "Agent.h"
#include "Simulator.h"
#include "Environment.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main()
{
	int dt = 60;
	int dg = 70;

	cout << "Start of thermostat..." << endl << endl;

	Simulator sim(dt, dg);
	cout << "Default thermostat set to " << dg << " degrees..." << endl;
	cout << "Default room tempurature set to " << dt << " degrees..." << endl;
	cout << endl;

	//Main user loop
	bool go = true;
	while (go)
	{
		sim.askOwner();
		sim.run();
	}
}