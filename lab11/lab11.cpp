/*
James Davis
CS201
September 27th
lab11.cpp
This program will
*/

#include <iostream>
#include <string>

int main()
{
	std::string inp;
	std::cout << "Please input a string:\n";
	std::cin >> inp;
	std::cout << "\n\n";

	//print lower case
	for (int i = 0; i < inp.size(); i++)
	{
		if (inp[i] >= 'a' && inp[i] <= 'z')
		{
			std::cout << inp[i];
		}
	}
	std::cout << "\n";

	//print upper case
	for (int i = 0; i < inp.size(); i++)
	{
		if (inp[i] >= 'A' && inp[i] <= 'Z')
		{
			std::cout << inp[i];
		}
	}
	std::cout << "\n";

	//print everything else
	for (int i = 0; i < inp.size(); i++)
	{
		if ((inp[i] >= 'a' && inp[i] <= 'z') || (inp[i] >= 'A' && inp[i] <= 'Z'))
		{
			//do nothing
		}
		else
			std::cout << inp[i];
	}
	std::cout << "\n";

	//test input
	//abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+
}