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

#ifndef HMheader_h
#define HMheader_h

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

string answer = "stinky"; //Don't tell anyone

#endif // !HMheader_h

