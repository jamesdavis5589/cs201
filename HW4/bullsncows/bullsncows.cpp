/*
James Davis
CS201
October 15th
HW4 - bullsncows.cpp
This program will run a guessing game
*/

#include <iostream>
#include <math.h>

void check(int x, int g1, int g2, int g3, int g4)
{
	int c = 0;
	int b;

	if (x % 10 == g4)
		c++;

	if ((x % 100) - (x % 10) == g3 * 10)
		c++;

	if ((x % 1000) - ((x % 100) - (x % 10)) == g2 * 100)
		c++;

	if (x - ((x % 1000) - ((x % 100) - (x % 10))) == g1 * 1000)
		c++;

	b = 4 - c;

	if (c != 0 && b != 0)
		std::cout << "You got " << c << " cows and " << b << " bulls!" << std::endl;
	else if(c==0)
		std::cout << "Uh oh, you got "<< b << " bulls..." << std::endl;
	else
	{
		std::cout << "HOLY MACKEROL, you got all cows!" << std::endl;
	}
}

bool win(int x, int g1, int g2, int g3, int g4)
{
	int c = 0;

	if (x % 10 == g4)
		c++;

	if ((x % 100) - (x % 10) == g3 * 10)
		c++;

	if ((x % 1000) - ((x % 100) - (x % 10)) == g2 * 100)
		c++;

	if (x - ((x % 1000) - ((x % 100) - (x % 10))) == g1 * 1000)
		c++;

	if (c == 4)
		return true;

	return false;
}

int main()
{
	//generate
	int g1 = rand() % 9;

	int g2 = rand() % 9;
	while(g2==g1)
		g2 = rand() % 9;

	int g3 = rand() % 9;
	while (g3 == g2)
		g2 = rand() % 9;

	int g4 = rand() % 9;
	while (g4 == g3)
		g2 = rand() % 9;

	int input;
	bool w = false;

	while (w != true)
	{
		std::cout << "What'sr guess, partner?\n";
		std::cin >> input;

		check(input, g1, g2, g3, g4);
		std::cout << std::endl;

		w = win(input, g1, g2, g3, g4);
	}

	std::string ib;
	std::cout << "would you like to go again?";
	std::cin >> ib;

	if (ib == "yes" || ib == "y")
		main();
}