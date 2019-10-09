/*
James davis and Alex Fraxia
CS201
October 3rd
Group Project 1 - proto.h
This program will serve as a central hub for all of the functions we create and use
*/

#pragma once

#include <string>
#include <iostream>

//main
void abrvt(std::string& s);
std::string setType(std::string s);

//temperature
double Cto(std::string s, double x);
double Kto(std::string s, double x);
double Fto(std::string s, double x);

//length
double Mto(std::string s, double x);
double inchto(std::string s, double x);
double footto(std::string s, double x);

//NOTE: I want to set it so that each type has a central unit, which all other units in that type convert to first before
//switching to other types

//EXAMPLE: All imperical units will switch to (inches) before transferring to the metric system, and all metrics will convert
//to centimeters before switching to imperial
