/*
James Davis
December 1st
CS201
HW6 - Shopping - shop.h
This program will
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

private:
	double unitPrice = 0;
	int units = 1;
};

#endif // !shop_h

