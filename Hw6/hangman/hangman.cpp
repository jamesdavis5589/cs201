/*
James Davis
CS201
November 10th
HW6 - hangman.cpp
This program will play hangman, using lambda functions
*/

#include "hangman.h"

int main()
{
	bool win;
	char input;

	SetLet;
	SetWordChars;

	//Turn
	for (int i = 0; i < 10; i++)
	{
		cout << "What letter now? ";
		cin >> input;

		check;
		print;

		cout << endl;
	
		//set perameters
		if (win==true)
		{
			cout << "Yay, you won!" << endl;
			break;
		}

		if (i = 9)
		{
			cout << "Well, you lost =/";
		}
	}
}