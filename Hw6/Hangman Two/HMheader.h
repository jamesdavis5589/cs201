/*
James Davis
December 1st
CS201
HW6 - Hangman - HMheader.h
This program will define the lambda functions used in main
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

#ifndef HMheader_h
#define HMheader_h

string answer = "stinky"; //Don't tell anyone

vector<char> Canswer;
vector<char> got;
vector<char> guessed;

bool win = false;

//Gathers different characters from answer
auto charSet = []()
{
	Canswer.push_back(answer[0]);
	bool boo;

	//Current letter in answer
	for (int c = 1; answer.size(); c++)
	{
		boo = true;

		//Checks if letter is already registered
		for (int d = 0; d < Canswer.size(); d++)
		{
			//Is letter found?
			if (answer[c] == Canswer[d])
			{
				boo = false;
			}
		}

		//If letter is new
		if (boo)
		{
			Canswer.push_back(answer[c]);
		}
	}
};

auto check = [](char let)
{
	//Add letter to guessed characters
	guessed.push_back(let);

	for (int i = 0; i < Canswer.size(); i++)
	{
		//Checks for existing char
		if (let == Canswer[i])
		{
			got.push_back(let);
			cout << "Nice, you got it!";
			break;
		}
	}

	//If char has no match
	cout << "Nope, character is not in the answer";
};

auto winCondition = []()
{
	int cLet = 0;

	//Letter from pool of correctly guessed chars
	for (int i = 0; i < got.size(); i++)
	{
		//Chars from answer
		for (int q = 0; q < Canswer.size(); q++)
		{
			if (got[i] == Canswer[q])
			{
				cLet++;
			}
		}
	}

	//If number of correct letters equals total number of chars, then you must've gotten them all
	if (cLet == Canswer.size())
	{
		win = true;
	}
};

#endif // !HMheader_h

