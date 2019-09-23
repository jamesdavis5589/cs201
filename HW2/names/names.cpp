/*
James Davis
CS201
September 18th
Homework 2
names.cpp
This prgram will provide functions for managing vectors
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void inputnames(std::vector<std::string> & names)
{
	std::string x;
	std::cin >> x;
	names.push_back(x);
}

bool doesNameExist(const std::string & nametoFind, const std::vector<std::string> & names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nametoFind)
		{
			return true;
			break;
		}
	}
	return false;
}

void printNames(const std::vector<std::string> & names)
{
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i];
		std::cout << "\n";
	}
}

int main(int argc, char **argv)
{
	std::vector <std::string> names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name:\n";
		std::getline(std::cin, name);
		names.push_back(name);
	}
	return 0;
}