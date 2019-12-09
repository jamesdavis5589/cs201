/*
James Davis
December 8th
CS201
HW8 - Bulls N Cows Redo - game.cpp
This program will define game
*/

#include "game.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

Game::Game() :
	set(),
	turns(10),
	win(false)
{
	digits = set.print();
}

void Game::match()
{
	Set set;

	for (int i = 0; i < turns; i++)
	{
		//If win condition was met last turn
		if (win)
		{
			break;
		}

		turn();
	}

	if (!win) //Lose
	{
		cout << "Uh oh, you lost =/";
	}
	else //Win
	{
		cout << "Hurray, you win!";
	}
	cout << endl << endl;

	//Play again?
	string pg;

	cout << "Would you like to play again?" << endl;
	cin >> pg;

	if (pg == "yes" || pg == "y")
	{
		match();
	}
}

void Game::turn()
{
	int input;

	cout << "What's your guess?" << endl;
	cin >> input;
	cout << endl;

	evaluate(input);
}

void Game::evaluate(int x)
{
	//Number of correct guesses
	int correct = 0;


	//First digit / 1 in 1234
	if (x - (x % 1000 - x % 100 - x % 10) == digits[3])
	{
		correct++;
	}

	//Second Digit / 2 in 1234
	if (x % 1000 - (x % 100 - x % 10) == digits[2])
	{
		correct++;
	}

	//Third Digit / 3 in 1234
	if (x % 100 - (x % 10) == digits[1])
	{
		correct++;
	}

	//Fourth Digit / 4 in 1234
	if (x % 10 == digits[0])
	{
		correct++;
	}

	//Win
	if (correct == 4)
	{
		win = true;
	}
	else
	{
		cout << "You got " << correct << " bulls";
		cout << endl << endl;
	}
}