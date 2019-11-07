/*
James Davis
CS201
November 6th
lab 27 - main.cpp
This program will
*/

#include <iostream>
#include <string>
#include <random>

using std::cout;
using std::endl;
using std::string;
using std::mt19937;
using std::random_device;

int main()
{
	

	int heads = 0;
	int tails = 0;

	for (int i = 0; i < 1000; i++)
	{
		random_device ran;
		//mt19937 gen(ran);  <--Was causing me errors with generate...
		std::uniform_int_distribution<int> dis(1, 2);
		int rando = dis(ran);

		if (rando == 1)
			heads++;
		else
			tails++;

		cout << rando << endl;
	}
	cout << "\n\n\n";

	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
}