/*
James Davis
December 1st
CS201
HW6 - math-cath.cpp
This program will do stuff with stuff from Catch2
*/

#include "catch2/catch.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <numeric>
using std::accumulate;
using std::inner_product;

int main()
{
	//SINE
	cout << "sin(pi/4)" << endl;
	cout << sin(3.1415/4);
	cout << "\n\n";
	
	//ATAN2
	cout << "atan2(20, -20)" << endl;
	cout << atan2(20, -20);
	cout << "\n\n";

	//accumulate()
	int accArray[] = { 1, 2, 3 };

	cout << "accumulate(accArray, accArray + 3, 30)" << endl;
	cout << accumulate(accArray, accArray + 3, 30);
	cout << "\n\n";
	
	/*
	//I can't figure out how to get the Inner-product to work
	//Whenever I try to find out what an inner product is, I just find something about vectors from linear algebra

	//inner-product
	int array1[] = { 5, 10, 15, 20, 25, 30 };
	int array2[] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	cout << "inner-product(array1[0], array1[2], array2[0], 20)" << endl;
	cout << inner_product(array1[0], array1[2], array2[0], 5);*/
}