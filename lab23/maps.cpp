/*
James Davis
CS201
October 28th
lab23
This program will create and output a map set (IN ORDER! :D )
*/

#include <map>
#include <string>
#include <iostream>
#include <vector>

std::map <std::string, int> mapSort(std::map <std::string, int> list)
{
	//correct order
	std::vector<int> order;
	std::map <std::string, int> good;

	//map numbers
	std::vector <int> count;
	for (auto h : list)
	{
		count.push_back(h.second);
	}

	//moving numbers to order in correct order
	for (int k = 0; k < count.size(); k++)
	{
		int small = count[0];
		for (int i = 1; i < count.size(); i++)
		{
			if (count[i] < small)
				small = count[i];
		}
		order.push_back(count[small]);
		count.erase(count.begin() + small);
	}

	//creating new map that's sorted input
	for (int i = 0; i < order.size(); i++)
	{
		for (auto k : list)
		{
			if (k.second == order[i])
			{
				std::string str = k.first;
				good[str] = order[i];
				break;
			}
		}
	}

	return good;
}

int main()
{
	std::map <std::string, int> mp;
	mp["apple"] = 2;
	mp["pear"] = 3;
	mp["banana"] = 1;
	mp["watermelon"] = 5;
	mp["pomegranate"] = 4;

	mp.erase("pear");

	std::map <std::string, int> sorted = mapSort(mp);

	for (auto x : sorted)
	{
		std::cout << x.first << ", " << x.second << std::endl;
	}

	//NOTES: I managed to create a sorting program, though only 2 values were returned (though, they were in fact, sorted)
}