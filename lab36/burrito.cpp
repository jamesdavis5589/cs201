/*
James Davis
December 2nd
CS201
lab 36 - burrito.cpp
This program will check for burrito stuff
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

const int Beans = 1;
const int Cheese = 2;
const int Beef = 4;
const int SourCream = 8;
const int HotSauce = 16;
const int Tomatos = 32;

void checkToppings(int x)
{
	bool toppings = false;

	//Potential Toppings
	if ((x & Cheese) != 0)
	{
		cout << "Cheese, ";
		toppings = true;
	}
	if ((x & Beef) != 0)
	{
		cout << "Beef, ";
		toppings = true;
	}
	if ((x & SourCream) != 0)
	{
		cout << "Sour Cream, ";
		toppings = true;
	}
	if ((x & HotSauce) != 0)
	{
		cout << "Hot Sauce, ";
		toppings = true;
	}
	if ((x & Tomatos) != 0)
	{
		cout << "Tomatos, ";
		toppings = true;
	}

	//If burrito is empty
	if (!toppings)
	{
		cout << "Tortilla-only ";
	}

	cout << "burrito!";

}

int main()
{
	cout << "First burrito:" << endl;
	checkToppings(Beans | Cheese);
	cout << "\n\n";

	cout << "Second burrito:" << endl;
	checkToppings(Beans | Cheese | Beef);
	cout << "\n\n";

	cout << "Third burrito:" << endl;
	checkToppings(HotSauce | SourCream | Beef | Cheese);
	cout << "\n\n";
}