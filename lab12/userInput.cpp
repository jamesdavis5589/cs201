/*
James Davis
CS201
September 30th
lab 12 - userInput.cpp
This program will define the prototype getUserStrings
*/

#include "userInput.hpp"
#include <iostream>

void getUserStrings(std::vector<std::string>& words)
{
	std::string w;
	while (w != "end")
	{
		std::cin >> w;
		words.push_back(w);
		std::cout << "\n";
	}

	words.resize(words.size() - 1);
}

void getUserStrings2(std::vector<std::string>& words)
{
	std::cout << "now on additional 1\n";
	std::string w;
	while (w != "end")
	{
		std::cin >> w;
		if(w.size()>=5)
			words.push_back(w);
		std::cout << "\n";
	}

	words.resize(words.size() - 1);
}

/*void getUserStrings3(std::vector<std::string>& words)
{
	std::string w;
	while (w != "end")
	{
		std::cin >> w;
		bool good = false;

		for (int i = 0; i < w.size(); i++)
		{
			if (w[i] == 'c')
				good = true;

			if(good==true)
				words.push_back(w);

			good = false;
		}
		
		std::cout << "\n";
	}

	words.resize(words.size() - 1);
}*/