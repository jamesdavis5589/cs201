/*
James Davis
CS201
November 9th
hw6 - random-map.cpp
This program will
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <utility>
#include <algorithm>

using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::map;
using std::cout;
using std::endl;

int RandomBetweenU(int first, int last)
{
	random_device ran;
	mt19937 gen(ran);
	uniform_int_distribution<int> dis(first, last);
	return dis(ran);
}

int RandomBetweenN(int first, int last)
{
	random_device ran;
	mt19937 gen(ran);
	normal_distribution<int> dis(first, last);
	return dis(gen);
}

int RandomBetween(int first, int last)
{
	return rand() % last + first;
}

void PrintDistribution(const map<int, int> &numbers, int min, int max)
{
	//first histograph
	for (int i = max; i < min; i--)
	{
		for (auto x : numbers)
		{
			if (*x.first() == i)
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	//second histograph
	
}

int main()
{
	/*
	// Seed with a real random value, if available
	std::random_device r;

	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';

	// Generate a normal distribution around that mean
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(mean, 2);

	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(normal_dist(e2))];
	}
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	*/

	
	map<int, int> box;

	int min = 3;
	int max = 9;

	for (int q = 0; q < 200; q++)
	{
		int t1 = RandomBetweenN(min, max);
		int t2 = RandomBetween(min, max);

		box[t1] = t2;
	}


}