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

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Create unit struct that takes unit strings and conversion quantity
struct unit{
    string from;
    string to;
    double qty;
};

//main
int UnitToCode(const unit &info);
int UnitFromCode(const unit &info);
std::string setType(const unit& info, std::string s);

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

#endif
