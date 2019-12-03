/*
James Davis
December 1st
CS201
HW6 - Hangman - HMmain.cpp
This program will play a game of hangman utilising lambda functions
*/

#include "HMheader.h"

//NOTE: It works out in my head but it seems like nothing is registering
//		Letters aren't added to guessed and correct guesses count as wrong

int main()
{
	charSet;
	Canswer.push_back('s');
	Canswer.push_back('t');
	Canswer.push_back('i');
	Canswer.push_back('n');
	Canswer.push_back('k');
	Canswer.push_back('y');
	//NOTE: After adding the direct pushbacks above, correct guesses now register as correct, but 
	//		win condition isn't activating 

	char input;

	//Main user input
	for (int t = 0; t < 10; t++)
	{
		printGuessed;

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