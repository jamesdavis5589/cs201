/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - proto.h
This program will serve as a central hub for all of the functions we create and use
*/

#ifndef proto_H
#define proto_H

#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<string> units {
"Farenheit", "Celsius", "Kelvin",
"Millimeters", "Centimeters", "Meters", "Kilometers",
"Inches", "Feet", "Miles"
};

//main
void printChart();

//temperature
double Cto(int t, double x);
double Kto(int t, double x);
double Fto(int t, double x);

//length
double Mto(int t, double x);
double CMto(int t, double x);
double MMto(int t, double x);
double KMto(int t, double x);
double inchto(int t, double x);
double footto(int t, double x);
double mileto(int t, double x);

/*
IDEAS:

Add FLTK interface, can FLTK be included within project, so it doesn't need to be added on new computers?
Time conversions
*/

/*
UNITS:

Farenheit - 1
Celsius - 2
Kelvin - 3

Millimeters - 4
Centimeters - 5
Meters - 6
Kilometers - 7

Inches - 8
Feet - 9
Miles - 10
*/

#endif
