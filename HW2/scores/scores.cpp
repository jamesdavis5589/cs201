/*
James Davis
CS201
September 21st
HW@ - scores.cpp
This program will recieve user input for users and their scores, then print them out
*/

#include <string>
#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> peeps;
	std::vector<int> scores;

	std::string x;
	int y;
	bool flag = false;

	while (flag==false)
	{
		std::cout << "Please enter the name then score of individual, or type stop to end:\n";
		std::cout << "name\n";
		std::cin >> x;
		if (x == "stop")
			break;

		for (int i = 0; i < peeps.size(); i++)
		{
			if (x == peeps[i])
			{
				std::cout << "Error: username already in use";
				flag = true;
			}
		}
		if (flag == false)
		{
			std::cout << "score\n";
			std::cin >> y;

			peeps.push_back(x);
			scores.push_back(y);

			std::cout << "\n\n";
		}
	}

	for (int i = 0; i < peeps.size(); i++)
	{
		std::cout << peeps[i] << " - " << scores[i] << "\n";
	}
}