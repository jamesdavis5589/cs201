/*
James Davis
CS201
October 2nd
lab 13 - vector_manip.cpp
This program will
*/

#include "vector_manip.hpp"
#include <iostream>

//print vrctor
void pv(std::vector <std::string>& v)
{
	for (std::string x: v)
	{
		std::cout << x << " ";
	}
}

void pv2(std::vector <std::string>& v, char y)
{
	for (std::string x : v)
	{
		x[0] = y;
		std::cout << x << " ";
	}
}