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
using std::to_string;


string word = "orangutan"; //don't tell anybody
vector<char> letters; //letters in word
vector<char> wordlet; //characters of the word
vector<char> got; //letters guessed correctly


//fills vector chars with characters in the word
auto SetLet = [](string str) 
{
	bool present;

	for (char c : str)
	{
		present = false;

		//checks if character is already recorded
		for (char c2 : letters)
		{
			if (c == c2)
			{
				present = true;
				break;
			}
		}

		if (!present)
		{
			letters.push_back(c);
		}
	}
};

//Checks if letter is present
auto check = [](char c)
{
	for (char ch : letters)
	{
		if (c == ch)
		{
			got.push_back(c);
		}
	}
};

//creates a vecotr of the chars of the word for use in functions
auto SetWordChars = []()
{
	for (int i = 0; i < word.size(); i++)
	{
		wordlet.push_back(word[i]);
	}
};

//prints out current progress of word
auto print = []()
{
	for (char c : got)
	{
		for (char c2 : wordlet)
		{
			if (c == c2)
			{
				cout << c;
			}
			else
				cout << "_";
		}
	}
};

//returns the current word with our correctly guessed characters
auto cword = []()
{
	vector<char> current;

	for (char c : got)
	{
		for (char c2 : wordlet)
		{
			if (c == c2)
			{
				current.push_back(c);
			}
		}
	}

	//gather chars into our word
	string s(current.begin(), current.end());

	return s;
};

auto SetNewChars = [](string s)
{
	vector<char> nc;

	for (int i = 0; i < s.size(); i++)
	{
		nc.push_back(s[i]);
	}

	return nc;
};

#endif 