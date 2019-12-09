/*
James Davis
December 8th
CS201
HW8 - CRUD Redo - CRUD.cpp
This program will define CRUD
*/

#include "CRUD.h"

#include <iostream>
using std::cout;
using std::endl;

void CRUD::create(map<string, string> &m, string s, string f)
{
	m.insert(pair<string, string>(s, f));
}

string CRUD::read(pair<string, string> p)
{
	return p.second;
}
string CRUD::read(pair<string, string> p, int x)
{
	if (x == 2)
		return p.second;
	else
		return p.first;
}
string CRUD::read(map<string, string> m, string s)
{
	return m[s];
}
void CRUD::read(map<string, string> m)
{
	for (pair<string, string> p : m)
	{
		cout << read(p, 1) << ": " << read(p, 2) << endl;
	}
}

void CRUD::update(map<string, string> &m, string s, string f)
{
	m[s] = f;
}

void CRUD::Dlete(map<string, string> &m, string s)
{
	m.erase(s);
}