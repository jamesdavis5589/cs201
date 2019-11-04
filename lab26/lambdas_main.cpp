/**
 * @file     lambdas_main.cpp
 * @author   James Davis
 * @date     November 4th, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

using std::vector;
using std::string;
using std::pair;


int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	vector <pair<size_t, string>> vec;

	size_t c = 1;
	for (string i : WIKIPEDIA_CPP)
	{
		pair<size_t, string> p = std::make_pair(c, i);
		vec.push_back(p);
		c++;
	}

	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	auto lambda = [](pair<size_t, string> a, pair<size_t, string> b)
	{
		size_t v1 = a.first;
		size_t v2 = b.first;

		return v1 > v2;
	};

	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}