/*
James Davis
September 29th -> December 1st
CS201
HW3 - boxer.cpp
This program will define the box prototype
*/

#include "boxer.h"

void box(std::string word, int x)
{
	int width;
	width = word.size() + 2 + (2 * x);

	char print = 'X';

	//top
	for (int i = 0; i < x; i++)
	{
		for (int k = 0; k < width; k++)
		{
			std::cout << print;
		}
		std::cout << "\n";
	}

	//mid 1
	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}

	for (int i = 0; i < width - (2 * x); i++)
	{
		std::cout << " ";
	}
	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}
	std::cout << "\n";

	//mid 2
	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}

	std::cout << " " << word << " ";

	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}
	std::cout << "\n";

	//mid 3
	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}
	for (int i = 0; i < width - (2 * x); i++)
	{
		std::cout << " ";
	}
	for (int i = 0; i < x; i++)
	{
		std::cout << print;
	}
	std::cout << "\n";

	//bottom
	for (int i = 0; i < x; i++)
	{
		for (int k = 0; k < width; k++)
		{
			std::cout << print;
		}
		std::cout << "\n";
	}
}