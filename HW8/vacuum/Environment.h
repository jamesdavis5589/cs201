/*
James Davis
December 8th
CS201
HW8 - vacuum - Environment.h
This program will house prototypes for Environment
*/

#ifndef Environment_h
#define Environment_h

class Environment
{
	bool clean;

public:
	Environment();
	Environment(bool c);

	bool getClean();
	void setClean(bool b);
};

#endif