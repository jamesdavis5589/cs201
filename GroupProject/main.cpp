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
	if (unin[0] == 'f' || unin[0] == 'c' || unin[0] == 'k')
		type1 = "temp";
	if (unout[0] == 'f' || unout[0] == 'c' || unout[0] == 'k')
		type2 = "temp";

	if (unin == "cm" || unin == "mm" || unin == "m" || unin == "km")
		type1 = "length";
	if (unout == "cm" || unout == "mm" || unout == "m" || unout == "km")
		type2 = "length";

	if (unin == "inch" || unin == "foot" || unin == "mile")
		type1 = "length";
	if (unout == "inch" || unout == "foot" || unout == "mile")
		type2 = "length";


	if (type1 != type2)
	{
		std::cout << "ERROR: Unit types do not match, please try again\n\n\n\n\n\n\n";
		main();
	}

	//conversion time!
	std::cout << "How many " << unin << " are you converting into " << unout << "?\n";
	std::cin >> tin;
}