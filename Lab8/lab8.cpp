/*
James Davis
CS201
September 20th
lab8.cpp
This program will define preestablished functions declared in separate .hpp files
*/

#include lab8.hpp
#include intio.hpp
#include <iostream>

int doInput()
{
	std::cout << "Please input an integer:";
	return getInt();
}

int compute(int x)
{
	if (x <= 0)
		return 0

	int count=-1;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			count++;
	}
	return count;
}