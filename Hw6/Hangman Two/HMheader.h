/*
James Davis
December 1st
CS201
HW6 - Hangman - HMheader.h
This program will
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

//for when you inevitably lose
auto lose = []()
{
	cout << "Uh uh, you lost  =/";
	cout << "\n\n";
	cout << "Want to go again?";

	string Lin;
	cin >> Lin;

	if (Lin == "y" || Lin == "yes")
	{
		main();
	}
};

//Gathers different characters from answer
auto charSet = [](string)
{
	Canswer.push_back(answer[0]);
	bool boo;

	//Current letter in answer
	for (int c = 1; answer.size(); c++)
	{
		//Checks if letter is already registered
		for (int d = 0; d < Canswer.size(); d++)
		{
			boo = true;

			//Is letter found?
			if (answer[c] == Canswer[d])
			{
				boo = false;
			}

			//If letter is new
			if (boo)
			{
				Canswer.push_back(answer[c]);
			}
		}
	}
};

#endif // !HMheader_h

