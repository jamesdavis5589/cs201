/*
James Davis
CS201
October 21st
lab20
This program will print out angles with their corresponding cosine outputs
*/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>

int main()
{
	std::vector <double> ang;
	for (double i = 0; i < 180; i += 5)
	{
		ang.push_back(i);
	}

	std::vector <double> rad;
	for (double x : ang)
	{
		rad.push_back(x * (M_PI / 180));
	}

	for (int i = 0; i < rad.size(); i++)
	{
		std::cout << std::setprecision(8) << "Angle: " << ang[i] << ", cos(): " << cos(ang[i]) << std::endl;
	}
}