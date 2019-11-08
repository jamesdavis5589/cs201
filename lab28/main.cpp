/*
James Davis
CS201
November 8th
lab 28 - main.cpp
This program will write stuff in a text document
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>

void part1()
{
	int count = 1;
	std::ofstream of("TEXT_DOCUMENT.txt");

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			of << count << " ";

			count++;
		}

		of << std::endl;
	}
}

//WIP
void additional()
{
	std::vector<int> vec;

	for (int i = 0; i < 100; i++)
	{
		vec.push_back(i);
	}

	std::mt19937 x;
	std::shuffle(vec.begin(), vec.end(), x);

	//Print to document
	int count = 1;
	std::ofstream of("SECOND_DOCUMENT.txt");

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			of << count << " ";

			count++;
		}

		of << std::endl;
	}
}

int main()
{
	part1();

	additional();
}