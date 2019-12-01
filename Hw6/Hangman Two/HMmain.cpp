/*
James Davis
December 1st
CS201
HW6 - Hangman - HMmain.cpp
This program will play a game of hangman utilising lambda functions
*/

#include "HMheader.h"

int main()
{
	charSet;

	char input;

	//Main user input
	for (int i = 0; i < 10; i++)
	{
		//Input
		cout << "What is your next character?" << endl;
		cin >> input;
		cout << "\n\n";

		//Check input
		check(input);
		cout << "\n";

		//Did you win?
		winCondition;
		if (win)
		{
			cout << "Congratulations, you've won!" << endl;
			break;
		}

		cout << "--------------------------------------------\n" << endl;
	}

	//lose after 10 turns
	if (!win)
	{
		cout << "Uh uh, you lost  =/" << endl;
	}
}