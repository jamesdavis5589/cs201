/*
James Davis
September 15th
CS201
HW1 - mileskm.cpp
This program will conver m=miles into kilometers
*/

#include <iostream>

int main()
{
	double miles;
	double kilo;
	std::cout << "How many miles?\n";
	std::cin >> miles;

	kilo = (miles * 1.609);
	std::cout << "Kilometers:";
	std::cout << kilo;
}