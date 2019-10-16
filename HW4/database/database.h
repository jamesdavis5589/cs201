/*
James Davis
CS201
October 15th
HW4 - database.h
This program will
*/

#pragma once

#include <string>
#include <vector>
#include <iostream>

std::vector <std::string> name;
std::vector <std::string> color;
std::vector <int> ref;

void create(std::string nn, std::string nc);
void read(std::string g);
void read(int g);
void update(int x, std::string n, std::string c);

void Dlete(int x);
