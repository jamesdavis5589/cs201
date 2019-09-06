/**
 *James Davis
 *September 4th
 *CS201
 *Diamond.cpp
 *This program will take user input int, then output a diamond shape with a corresponding size
*/

#include <iostream>

//creating a method for user input
public int x;
public static void ask()
{
	cout << "Please input an integer\n";
	cin >> x;

	//check if input is an integer
	if (x != int)
	{
		cout << "That was not an integer, please try again\n";
		ask();   //asks the user for another input
	}
}

int main
{
	ask();

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
