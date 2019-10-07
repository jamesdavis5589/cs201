/*
James Davis
CS201
October 7th
lab15 - main.cpp
This program will print the numbers in a string using string stream
*/

#include "Header.h"

bool errorCheck(std::vector <std::string> v)
{
	bool error;
	int errorCount = 0;

	for (int i = 0; i < v.size(); i++)
	{
		if (!pnum(v[i]))
		{
			std::cout << "ERROR: value located at slot " << i + 1 << " is causing a string stream error.\n";
			error = true;
			errorCount++;
		}
	}

	std::cout << "Number of errors: " << errorCount << "\n";
	return error;
}

int main()
{
	std::vector <std::string> ex = { "69", "69a", "a69", "5.6", "    68", "\t11", "68 69", "0xA" };

	errorCheck(ex);

	for (std::string s: ex)
	{
		std::cout << pnum(s) << ", ";
	}

	std::cout << "\n";
}