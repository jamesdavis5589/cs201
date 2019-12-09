/*
James Davis
December 8th
CS201
HW8 - CRUD Redo - main.cpp
This program will test CRUD
*/

#include "CRUD.h"
using CRUD::create;
using CRUD::Dlete;
using CRUD::read;
using CRUD::update;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//This is a remake of CRUD.cpp from HW3

int main()
{
	//Creating a base map
	map<string, string> m;
	m["James"] = "Halo";
	m["Ben"] = "Civilization";
	m["Josh"] = "Dragon Ball";
	m["Derick"] = "Terarria";

	//Testing Create
	create(m, "Zack", "League");

	//Testing Read
	read(m);
}