#pragma once
#include <iostream>

bool isDiv3(int x)
{
	if (x % 3 == 0)
		return true;

	return false;
}

void isAdivB(int a, int b)
{
	for (int i = 1; i <= a; i++)
	{
		if (i % b == 0)
			std::cout << i << "\n";
	}
}
