/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

//no longer needed
int UnitToCode(const unit &info)
{
    std::string to = info.to;
    int codeTo = 0;
    if (to == "fahrenheit")
        codeTo = 1;
    if (to == "celsius")
        codeTo = 2;
    if (to == "kelvin")
        codeTo = 3;
	if (to == "millimeters")
		codeTo = 4;
	if (to == "centimeters")
		codeTo = 5;
	if (to == "meters")
		codeTo = 6;
	if (to == "kilometers")
		codeTo = 7;
    if (to == "inches")
        codeTo = 8;
    if (to == "feet")
        codeTo = 9;
    if (to == "miles")
        codeTo = 10;
    return codeTo;
}

int UnitFromCode(const unit &info){
    std::string from = info.from;
    int codeF = 0;
    if (from == "fahrenheit")
        codeF = 1;
    if (from == "celsius")
        codeF = 2;
    if (from == "kelvin")
        codeF = 3;
    if (from == "millimeters")
        codeF = 4;
    if (from == "centimeters")
        codeF = 5;
    if (from == "meters")
        codeF = 6;
    if (from == "kilometers")
        codeF = 7;
    if (from == "inches")
        codeF = 8;
    if (from == "feet")
        codeF = 9;
    if (from == "miles")
        codeF = 10;
    return codeF;
}

//change to int types instead of string checks

//std::string setType(std::string s)
//{
//	if (s[0] == 'f' || s[0] == 'c' || s[0] == 'k')
//		return "temp";
//
//
//	if (s == "cm" || s == "mm" || s == "m" || s == "km")
//		return "length";
//
//	if (s == "inches" || s == "feet" || s == "miles")
//		return "length";
//
//	return "ERROR";
//}
