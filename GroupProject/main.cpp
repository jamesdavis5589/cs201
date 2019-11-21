/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - main.cpp
This program will utilise and implement functions created in the header files
*/

#include "proto.h"

//DUE TO CHANGES WITH FUNCTIONS, MAIN MAY NO LONGER WORK, AND MAY NEED TO BE MODIFIED AS WELL

int main()
{
	//Vector Units is now preallocated in proto.h
	/*
	units.push_back("Farenheit");
	units.push_back("Celsius");
	units.push_back("Kelvin");

	units.push_back("Millimeters");
	units.push_back("Centimeters");
	units.push_back("Meters");
	units.push_back("Kilometers");
	units.push_back("Inches");
	units.push_back("Feet");
	units.push_back("Miles");
	*/
	int unin;
	int unout;

	printChart();
	cout << "\nAbove are listings of available units along with their correlating integers" << endl;
	cout << "Please use the appropriate integers for selecting units to convert\n" << endl;

	cout << "You are converting ___ \n";
	cin >> unin;
	cout << "...into ___ \n";
	cin >> unout;
}