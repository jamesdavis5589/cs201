/*
James Davis
December 8th
CS201
HW8 - Bulls N Cows Redo - main.cpp
This program will run the main Bulls N Cows program
*/

#include "Set.h"
#include "game.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main()
{
	string intro;

	cout << "Hello, and welcome to Bulls N Cows Remastered." << endl;
	cout << "To win, you must guess all 4 numbers correctly" << endl;
	cout << "Enter any character to start: ";
	cin >> intro;

	if (intro != "srxdctfvgybhunjhbgvfctdrtbyunbhgv")
	{
		for (int skip = 0; skip < 3; skip++)
		{
			cout << endl;
		}
	}

	Game game;
	game.match();
}