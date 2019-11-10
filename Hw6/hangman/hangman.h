/*
James Davis
CS201
November 10th
HW6 - hangman.h
This program will host important stuff, such as the super secret answer
*/

#ifndef hangman_h
#define hangman_h

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;


string word = "orangutan"; //don't tell anybody
vector<char> chars;

//fills vector chars with characters in the word
auto SetLet = [](string str) 
{
	bool present;

	for (char c : str)
	{
		present = false;

		//checks if character is already recorded
		for (char c2 : chars)
		{
			if (c == c2)
			{
				present = true;
				break;
			}
		}

		if (!present)
		{
			chars.push_back(c);
		}
	}
};

#endif 