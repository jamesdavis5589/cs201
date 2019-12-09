/*
James Davis
December 8th
CS201
HW8 - CRUD Redo - CRUD.cpp
This program will define CRUD
*/

#include "CRUD.h"

void CRUD::create(map<string, string> m, string s, string f)
{
	m[s] = f;
}

string CRUD::read(pair<string, string> p)
{
	return p.second;
}

void CRUD::update(map<string, string> m, string s, string f)
{
	m[s] = f;
}

void CRUD::Dlete(map<string, string> m, string s)
{
	m.erase(s);
}