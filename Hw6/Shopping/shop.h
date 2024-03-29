/*
James Davis
December 1st
CS201
HW6 - Shopping - shop.h
This program will house includes and prototypes
*/

#ifndef shop_h
#define shop_h

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
	void setPrice(double d)
	{
		unitPrice = d;
	}

	void setUnits(int u)
	{
		units = u;
	}

	int getUnits()
	{
		return units;
	}

	double getPrice()
	{
		return unitPrice;
	}

	double cost()
	{
		return unitPrice * units;
	}

private:
	double unitPrice = 0;
	int units = 0;
};

void add(record r, int i);

void remove(record r, int i);

#endif // !shop_h