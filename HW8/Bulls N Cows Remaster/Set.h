/*
James Davis
December 8th
CS201
HW8 - Bulls N Cows Redo - Set.h
This program will house prototypes for Set
*/

#ifndef Set_h
#define Set_h

#include <vector>
using std::vector;

class Set
{
	int d1;
	int d2;
	int d3;
	int d4;

public:
	Set();
	vector<int> print();
};

#endif // !Set_h