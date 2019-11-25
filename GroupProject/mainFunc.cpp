/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

//Convert text unit selections to integers
int UnitToCode(const unit &info)
{
    std::string to = info.to;
    int codeTo = 0;
    if (to == "Fahrenheit")
        codeTo = 1;
    if (to == "Celsius")
        codeTo = 2;
    if (to == "Kelvin")
        codeTo = 3;
	if (to == "Millimeters")
		codeTo = 4;
	if (to == "Centimeters")
		codeTo = 5;
	if (to == "Meters")
		codeTo = 6;
	if (to == "Kilometers")
		codeTo = 7;
    if (to == "Inches")
        codeTo = 8;
    if (to == "Feet")
        codeTo = 9;
    if (to == "Miles")
        codeTo = 10;
    return codeTo;
}

int UnitFromCode(const unit &info){
    std::string from = info.from;
    int codeF = 0;
    if (from == "Fahrenheit")
        codeF = 1;
    if (from == "Celsius")
        codeF = 2;
    if (from == "Kelvin")
        codeF = 3;
    if (from == "Millimeters")
        codeF = 4;
    if (from == "Centimeters")
        codeF = 5;
    if (from == "Meters")
        codeF = 6;
    if (from == "Kilometers")
        codeF = 7;
    if (from == "Inches")
        codeF = 8;
    if (from == "Feet")
        codeF = 9;
    if (from == "Miles")
        codeF = 10;
    return codeF;
}


