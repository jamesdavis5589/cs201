/*
James Davis
CS201
September 22nd
HW2 - money.cpp
This program will take user input for each coin type, then return the cash total
*/

#include <iostream>

int main()
{
	double pc=0;
	double nc=0;
	double dc=0;
	double qc=0;

	double total;

	std::cout << "How many pennies?\n";
	std::cin >> pc;
	std::cout << "How many nickles?\n";
	std::cin >> nc;
	std::cout << "How many dimes?\n";
	std::cin >> dc;
	std::cout << "How many quarters?\n";
	std::cin >> qc;

	if (pc!=1)
		std::cout << "You have " << pc << " pennies\n";
	else
		std::cout << "You have 1 penny\n";

	if (nc!= 1)
		std::cout << "You have " << nc << " nickels\n";
	else
		std::cout << "You have 1 nickel\n";

	if (dc!= 1)
		std::cout << "You have " << dc << " dimes\n";
	else
		std::cout << "You have 1 dime\n";

	if (qc!= 1)
		std::cout << "You have " << qc << " quarters\n";
	else
		std::cout << "You have 1 quarter\n";

	total = pc + (nc * 5) + (dc * 10) + (qc * 25);

	if (total < 100)
		std::cout << "You have a total of " << total << " cents\n";
	else
	{
		total /= 100;
		std::cout << "You have $" << total <<"\n";
	}
}