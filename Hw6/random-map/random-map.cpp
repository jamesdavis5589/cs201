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
	mt19937 gen(ran());
	uniform_int_distribution<int> dis(first, last);
	return dis(ran);
}

int RandomBetweenN(double first, double last)
{
	random_device ran;
	mt19937 gen(ran());
	normal_distribution<double> dis(first, last);
	return dis(gen);
}

int RandomBetween(int first, int last)
{
	return rand() % last + first;
}

void PrintDistributionN(int min, int max)
{
	random_device r;

	int mean = RandomBetweenN(min, max);

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
}

void PrintDistributionU(int min, int max)
{
	random_device r;

	int mean = RandomBetweenU(min, max);

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
}

void PrintDistribution(int min, int max)
{
	random_device r;

	int mean = RandomBetween(min, max);

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
}

int main()
{
	int min = 2;
	int max = 9;

	cout << "Uniform Distribution:" << endl;
	PrintDistributionU(min, max);
	cout << "\n\n" << endl;

	cout << "Normal Distribution:" << endl;
	PrintDistributionN(min, max);
	cout << "\n\n" << endl;

	cout << "Purely Random Distribution:" << endl;
	PrintDistribution(min, max);
}