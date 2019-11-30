/*
James Davis
CS201
November 25th
lab 35 - student.h
This program will define the class student
*/

#ifndef student_hpp
#define student_hpp

#include <string>

using std::string;

class Student
{
	string _name;
	int _id;

public:
	Student();
	Student(const string &s);
	Student(const string &s, const int &n);
	void printInfo() const;
};

#endif // !student_hpp

