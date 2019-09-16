/*
James Davis
September 16th
CS201
Lab 6 (lab6.cpp)
This program will create a method that
*/

#include <iostream>
#include <string>

void m6(std::string st)
{
	//prints word
	std::cout << st << std::endl;

	//prints out length in hashtags
	int ln = st.size() - 1;
	for (int i = 0; i < ln; i++)
	{
		std::cout << "#";
	}
}

int main()
{
	std::cout << "Trial 1 - Bazinga" << std::endl;
	m6("Bazinga");
	std::cout << "\n\n";

	std::cout << "Trial 2 - Mayonaise" << std::endl;
	m6("Mayonaise");
	std::cout << "\n\n";

	std::cout << "Trial 3 - Supercalafrajalisticexpealadotious" << std::endl;
	m6("Supercalafrajalisticexpealadotious");
	std::cout << "\n";
}