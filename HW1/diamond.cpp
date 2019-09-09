/**
 *James Davis
 *September 4th
 *CS201
 *HW1
 *Diamond.cpp
 *This program will take user input int, then output a diamond shape with a corresponding size
*/

#include <iostream>


public main
{
	int x;
	cout << "Please input an integer\n";
	cin >> x;

	//print out diamond
	int r;
	for (int i = 0, i < x, i++)
	{
		for (int p = 0, p < i, p++)
		{
			cout << "#";
		}
		cout << "\n";
		r = i;
	}

	for (int i = r--, i > 0, i--)
	{
		for (int p = 0, p < i, p++)
		{
			cout << "#";
		}
		cout << "\n";
	}

}