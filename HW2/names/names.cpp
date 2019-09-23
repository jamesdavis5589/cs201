/*
James Davis
CS201
September 18th
Homework 2
names.cpp
This prgram will
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void inputnames(std::vector<std::string> & names)
{
	std::string x;
	std::cin >> x;
	vector.pushBack(x);
}

bool doesNameExist(const std::string & nametoFind, const std::vector<std::string> & names)
{
	for (int i = 0; i < vector.size(); i++) //replace vector.size()
	{
		if (string == vector[i]) //replace string & vector[i]
		{
			return true;
			break;
		}
	}
	return false;
}

void printNames(const std::vector<string> & names)
{
	for (int i = 0; i < vector.size(); i++) //replace vector.size()
	{
		std::cout << vector[i]; //replace vector[i]
		std::cout << "\n";
	}
}

int main(int argc, char **argv)
{
	std::vector < std::string::names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name:\n";
		std::getline(cin, name);
		names.push_back(name);
	}
	return 0;
}