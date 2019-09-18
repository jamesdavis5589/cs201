/*
James Davis
CS201
September 18th
Lab 7
intio.h
This program will create methods used for other files
After finishing this, I realized that I was just supposed to download this file, rather than creating it myself =/
*/

#pragma once
#include <iostream>
#include <string>

int getInt()
{
	int x;
	//std::cout << "please input an integer:\n";
	std::cin >> x;
	return x;
}

void putInt(int x, int y)
{
	std::string xs = std::to_string(x);
	int spaces = y - xs.size();
	if (x < 0)
		spaces--;

	for (int i = 0; i < spaces; i++)
		std::cout << " ";
	std::cout << "\n";

	std::cout << x;
}

