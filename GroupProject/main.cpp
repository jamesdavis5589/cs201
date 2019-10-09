/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - main.cpp
This program will utilise and implement functions created in the header files
*/

#include "proto.h"

int main()
{
	std::string unin;
	std::string unout;

	double tin;
	double tout;

	char check;
	std::string type1;
	std::string type2;

	//unit inputs
	std::cout << "What would your input UNITS be?\n";
	std::cin >> unin;
	std::cout << "What unit would you like to convert to?";
	std::cin >> unout;

	//checking
	std::cout << "You are converting " << unin << " to " << unout << ", right? (y/n)";
	std::cin >> check;
	if (check == 'n')
	{
		std::cout << "Okay then, restarting...\n\n\n\n\n\n\n";
		main();
	}

	//abbreviating if possible
	abrvt(unin);
	abrvt(unout);

	//establishing type set
	type1 = setType(unin);
	type2 = setType(unout);

	if (type1 != type2 || type1 == "ERROR")
	{
		std::cout << "ERROR: Unit types do not match, please try again\n\n\n\n\n\n\n";
		main();
	}

	//conversion time!
	std::cout << "How many " << unin << " are you converting into " << unout << "?\n";
	std::cin >> tin;
}