/*
James Davis
CS201
November 25th
lab 35 - student.cpp
This program will define the class student
*/

#include "student.hpp"

#include <iostream>
using std::cout;
#include <cmath>
using std::rand;

Student::Student() :
	_name{ "New Student" },
	_id{ rand() % 10000 + 1 }
{}

Student::Student(const string &s) :
	_name{s},
	_id{rand() % 10000 + 1}
{}

Student::Student(const string &s, const int &n) : 
	_name{ s },
	_id{n}
{}

void Student::printInfo() const
{
	cout << _name << ", " << _id;
}