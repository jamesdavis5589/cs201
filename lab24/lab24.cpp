/*
James Davis
CS201
October 30th
lab24.cpp
This program will
*/

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main()
{
	std::map <std::string, int> jarjar;
	jarjar["Obi Wan"] = 3;
	jarjar["Darth Maul"] = 5;
	jarjar["Anakin"] = 8;
	jarjar["General Grivious"] = 2;
	jarjar["Palpatine"] = 1;
	jarjar["Mace Windu"] = 4;
	jarjar["Jengo Fett"] = 6;
	jarjar["Commander Cody"] = 9;
	jarjar["Captain Rex"] = 7;
	jarjar["Gonk Droid"] = 10;

	//woops, made a map, switching to normal vector
	
	std::vector <int> darthjarjar;
	for (auto x : jarjar)
	{
		int y = x.second;
		darthjarjar.push_back(y);
	}

	//initial vector
	std::cout << "Initial list:" << std::endl;
	for (auto a : darthjarjar)
	{
		std::cout << a << std::endl;
	}
	std::cout << "\n\n";

	//sorted vector
	sort(darthjarjar.begin(), darthjarjar.end());

	std::cout << "Sorted list:" << std::endl;
	for (int sumn: darthjarjar)
	{
		std::cout << sumn << std::endl;
	}
}