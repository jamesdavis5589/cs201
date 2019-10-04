/*
James Davis
CS201
October 4th
lab 14 - header.h
this program will
*/

#pragma once

#include <string>
#include <iostream>

void shrink(std::string s)
{
	int p = 0;

	for (int i = s.size(); i >= 0; i--)
	{
		std::cout << s.substr(0, i) << "\n";
	}
}