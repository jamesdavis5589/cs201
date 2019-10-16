/*
James Davis
CS201
October 15th
HW4 - tokenizer.h
This program will
*/

#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

int digit(int x);

bool ReadLine(std::string& str);
unsigned stringToTokenWS(std::vector <std::string>& tokens);
void analyzeTokens(const std::vector <std::string>& tokens);
