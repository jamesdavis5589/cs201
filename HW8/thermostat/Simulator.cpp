/*
James Davis
December 7th
CS201
HW8 - Simulator.cpp
This program will define class Simulator
*/

#include "Simulator.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

Simulator::Simulator() :
	room(),
	rex()
{}

Simulator::Simulator(int t, int g) :
	room(t),
	rex(t, g)
{}

void Simulator::askOwner()
{
	string input1;
	int input2;

	cout << "Hello, the thermostat is set to " << rex.getGoal() << " degrees." << endl;
	cout << "The current temperature is " << room.getTemp() << " degrees." << endl << endl;

	cout << "Would you like to change the thermostat?" << endl;
	cin >> input1;

	if (input1 == "yes" || input1 == "y")
	{
		cout << endl;
		cout << "What would you like to change the thermostat to?" << endl;

		cin >> input2;
		rex.setGoal(input2);
	}

	cout << endl;
}

void Simulator::run()
{
	for (int c = 0; c < 10; c++)
	{
		rex.percieve(room);
		rex.think();
		rex.act(room);

		room.iteration();
	}
}