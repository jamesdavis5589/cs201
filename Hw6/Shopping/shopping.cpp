/*
James Davis
December 1st
CS201
HW6 - Shopping - shopping.cpp
This program will
*/

#include <map>
using std::map;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

struct record
{
	double unitPrice;
	int units;
};

int main()
{
	record apple;
	apple.unitPrice = .79;
	apple.units = 1;

	record tv;
	tv.unitPrice = 399.99;
	tv.units = 1;

	record couch;
	couch.unitPrice = 129.99;
	couch.units = 1;

	record chicken;
	chicken.unitPrice = 7.99;
	chicken.units = 1;

	record shirt;
	shirt.unitPrice = 11.99;
	shirt.units = 1;

	map<string, record> cart;
}