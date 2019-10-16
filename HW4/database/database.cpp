/*
James Davis
CS201
October 15th
HW4 - database.cpp
This program will define the CRUD functions
*/

#include "database.h"

void create(std::string nn, std::string nc)
{
	name.push_back(nn);
	color.push_back(nc);
	ref.push_back(ref.size()+1);
}

void read(std::string g)
{
	bool flag = false;

	for (int i=0; i<name.size(); i++)
	{
		if (name[i] == g)
		{
			flag = true;

			std::cout << "Name: " << name[i] << "\nFavorite Color: " << color[i] << "\nSlot: " << i;
		}
	}
	if (flag == false)
	{
		for (int i = 0; i < color.size(); i++)
		{
			if (color[i] == g)
			{
				flag = true;

				std::cout << "Name: " << name[i] << "\nFavorite Color: " << color[i] << "\nSlot: " << i;
			}
		}
	}

	if (flag == false)
	{
		std::cout << "ERROR: No entry found.";
	}
}

void read(int g)
{
	if (g > ref.size() || g<0)
	{
		std::cout << "ERROR: No such slot exists";
	}

	bool flag = false;

	for (int i = 0; i < ref.size(); i++)
	{
		if (ref[i] == g)
		{
			flag = true;

			std::cout << "Name: " << name[i] << "\nFavorite Color: " << color[i] << "\nSlot: " << i;
		}
	}

	if (flag == false)
	{
		std::cout << "ERROR: No entry found.";
	}
}

void update(int x, std::string n, std::string c)
{
	if (x > ref.size() || x < 0)
	{
		std::cout << "ERROR: No such slot exists";
	}

	name[x] = n;
	color[x] = x;
}

//for some reason .erase() is causing errors and I don't understand why
/*
void Dlete(int x)
{
	ref.erase(x);
	name.erase(x);
	color.erase(x);
}
*/