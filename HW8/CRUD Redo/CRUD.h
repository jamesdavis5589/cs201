/*
James Davis
December 8th
CS201
HW8 - CRUD Redo - CRUD.h
This program will house prototypes for CRUD
*/

#ifndef CRUD_h
#define CRUD_h

#include <string>
using std::string;
#include <map>
using std::map;
using std::pair;

namespace CRUD 
{
	void create(map<string, string> m, string s, string f);

	string read(pair<string, string> p);
	string read(pair<string, string> p, int x);
	string read(map<string, string> m, string s);
	string read(map<string, string> m);

	void update(map<string, string> m, string s, string f);

	void Dlete(map<string, string> m, string s);
}

#endif // !CRUD_h