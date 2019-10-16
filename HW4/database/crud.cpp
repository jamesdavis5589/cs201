/*
James Davis
CS201
October 15th
HW4 - crud.cpp
This program will serve as the primary program for CRUD
*/

#include "database.h"

void menu()
{
	std::string ip;

	std::cout << "Hello, welcome to CRUD, what would you like to do?\n";
	std::cout << "create \nread \nupdate \ndelete \nend";
	std::cin >> ip;
	std::cout << "\n\n";
}

void see()
{
	std::string i1;
	std::string i2;

	std::cout << "Please input a name: ";
	std::cin >> i1;
	std::cout << "\nPlease input their favorite color: ";
	std::cin >> i2;

	create(i1, i2);
}

void argh()
{
	std::string it;
	int it3;

	std::cout << "Would you like to search by name/color, or by entry number? ";
	std::cin >> it;

	if (it == "number")
	{
		std::cout << "Which entry would you like to read? ";
		std::cin >> it3;

		read(it3);
	}
	else
	{
		std::cout << "What would you like to search for? ";
		std::cin >> it;

		read(it);
	}
}

void yooo()
{
	int im;
	std::string im2;
	std::string im3;

	std::cout << "Which entry number would you like to update/change? ";
	std::cin >> im;
	std::cout << "What will you change the name to? ";
	std::cin >> im2;
	std::cout << "What will you change the favorite color to? ";
	std::cin >> im3;
}

int main()
{
	create("James", "pink");
	create("Charles", "yellow");
	create("Miguel", "red");
	create("Kaden", "green");
	create("Casey", "blue");

	std::string input;
	std::string input2;
	int input3;

	menu();

	if (input == "create" || input == "c")
	{
		see();

		std::cout << "\n\nWould you like to add another? ";
		std::cin >> input;

		if (input == "yes" || input == "y")
		{
			see();
		}

		menu();
	}

	if (input == "read" || input == "r")
	{
		argh();

		std::cout << "\n\nWould you like to read another entry? ";
		std::cin >> input;
		if (input == "yes" || input == "y")
		{
			argh();
		}

		menu();
	}

	if (input == "update" || input == "u")
	{
		yooo();

		std::cout << "\n\nWould you like to update another entry? ";
		std::cin >> input;

		if (input == "yes" || input == "y")
		{
			yooo();
		}

		menu();
	}

	if (input == "delete" || input == "d")
	{
		std::cout << "Sorry, the delete function is out of order";
	}
}