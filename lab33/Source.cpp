/*

*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::to_string;

class sumn {
	int x;
	double y;

public:
	void setter(char c, double d)
	{
		if (c == 'x' || c == 'X')
		{
			x = d;
		}
		else
		{
			y = d;
		}
	}

	double getter(char c)
	{
		if (c == 'x' || c == 'X')
		{
			return x;
		}
		else
		{
			return y;
		}
	}

	void print()
	{
		auto p = to_string(x);
		auto q = to_string(y);

		cout << p << ", " << q;
	}
};

int main()
{
	cout << "Setting with setter:\n...\n" << endl;
	sumn clas;
	clas.setter('x', 32);
	clas.setter('y', 64.83);

	cout << "Using getter:" << endl;
	cout << "X-Value: " << clas.getter('x') << endl << "Y-Value: " << clas.getter('y');
	cout << endl << endl;

	cout << "Using print():" << endl;
	clas.print();
	cout << endl;
}