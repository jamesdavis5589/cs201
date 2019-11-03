/*
James Davis
CS201
November 1st
lab25 - main.cpp
This program will
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main()
{
	std::vector <int> prime { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector <int> mega { 1, 2, 3, 4, 16, 17, 18, 8, 9, 10 };

	std::pair <int, int> results;
	auto it = mismatch(prime.begin(), prime.end(), mega.begin());
	results.first = *it.first;
	results.second = *it.second;

	if (results.first = prime.size())
	{
		std::cout << "Both vectors are equal\n";
	}
	else
	{
		std::cout << "Vectors are not equal at:" << std::endl;
		std::cout << "First value: " << results.first << std::endl;
		std::cout << "Second value: " << results.second << "\n\n";
	}
} 