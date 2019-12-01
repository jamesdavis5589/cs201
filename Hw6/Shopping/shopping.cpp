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
	void setPrice(double d)
	{
		unitPrice = d;
	}

private:
	double unitPrice;
	int units = 1;
};

int main()
{
	record apple;
	apple.setPrice(.79);

	record tv;
	tv.setPrice(399.99);

	record couch;
	couch.setPrice(129.99);

	record chicken;
	chicken.setPrice(7.99);

	record shirt;
	shirt.setPrice(11.99);

	map<string, record> cart;
}