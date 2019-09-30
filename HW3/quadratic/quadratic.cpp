/*
James Davis
CS201
September 29th
HW# - quadratic.cpp
This program will use the quadratic formula to solve for roots
*/

#include <iostream>
#include <math.h>

double quadP(int a, int b, int c)
{
	double sr;
	sr = (b * b) - (4 * a * c);
	if (sr < 0)
		return 27.123456789;
	else
		sr = sqrt(sr);

	double ans;
	ans = -b + sr;
	ans = ans / (2 * a);
	return ans;
}

double quadN(int a, int b, int c)
{
	double sr;
	sr = (b * b) - (4 * a * c);
	if (sr < 0)
		return 27.123456789;
	else
		sr = sqrt(sr);

	double ans;
	ans = -b - sr;
	ans = ans / (2 * a);
	return ans;
}

int main()
{
	double a;
	double b;
	double c;

	std::cout << "From your quadratic equation, please enter your 'A' value:\n";
	std::cin >> a;
	std::cout << "Now enter your 'B' value:\n";
	std::cin >> b;
	std::cout << "And lastly, enter your 'C' value:\n";
	std::cin >> c;
	std::cout << "\n\n";

	if (quadP(a, b, c) == 27.123456789 || quadN(a, b, c) == 27.123456789)
	{
		std::cout << "ERROR: Root does not exist";
	}
	else if (quadP(a, b, c) != quadN(a, b, c))
	{
		std::cout << "The roots of your equation are:\n";
		std::cout << quadP(a, b, c) << ", and " << quadN(a, b, c);
	}
	else
	{
		std::cout << "The root of your equation is:\n";
		std::cout << quadP(a, b, c);
	}
	std::cout << "\n";
}