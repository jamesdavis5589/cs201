/*
James Davis
December 1st
CS201
HW6 - Shopping - shopping.cpp
This program will carry out the main function
*/

#include "shop.h"

int main()
{
	record apple;
	apple.setPrice(.79);
	record tv;
	tv.setPrice(399.99);
	record couch;
	couch.setPrice(129.99);
	record chicken;
	chicken.setPrice(7.99);
	record shirt;
	shirt.setPrice(11.99);

	map<string, record> cart;
	cart["apple"] = apple;
	cart["tv"] = tv;
	cart["couch"] = couch;
	cart["chicken"] = chicken;
	cart["shirt"] = shirt;

	//Start 
	cout << "Hello, welcome to a store.  At this store, we have:" << endl;
	cout << "apple, " << apple.getPrice() << endl;
	cout << "tv, " << tv.getPrice() << endl;
	cout << "Couch, " << couch.getPrice() << endl;
	cout << "Chicken, " << chicken.getPrice() << endl;
	cout << "Shirt, " << shirt.getPrice() << endl;
	cout << "\n\n";

	bool loop = true;
	while (loop)
	{
		cout << "What would you like to do?" << endl;
		cout << "add \nremove \ncheckout\n" << endl;

		string input;
		cin >> input;
		int intput;
		cout << endl;

		//Adding stuff
		if (input == "add")
		{
			cout << "What would you like to add?" << endl;
			cout << "apple, " << cart["apple"].getPrice() << endl;
			cout << "tv, " << cart["tv"].getPrice() << endl;
			cout << "Couch, " << cart["couch"].getPrice() << endl;
			cout << "Chicken, " << cart["chicken"].getPrice() << endl;
			cout << "Shirt, " << cart["shirt"].getPrice() << endl;
			cout << "\n";

			cin >> input;
			cout << "How much?" << endl;
			cin >> intput;
			cout << endl;

			add(cart[input], intput);
		}
		else if (input == "remove") //Removing stuff
		{
			cout << "What would you like to remove?" << endl;
			cout << "apple - " << cart["apple"].getUnits() << endl;
			cout << "tv - " << cart["tv"].getUnits() << endl;
			cout << "Couch - " << cart["couch"].getUnits() << endl;
			cout << "Chicken - " << cart["chicken"].getUnits() << endl;
			cout << "Shirt - " << cart["shirt"].getUnits() << endl;
			cout << "\n";

			cin >> input;
			cout << "How much?" << endl;
			cin >> intput;
			cout << endl;

			remove(cart[input], intput);
		}
		else
		{
			loop = false;
			break;
		}
	}

	//Checkout
	double total = 0;
	total += cart["apple"].cost();
	total += cart["couch"].cost();
	total += cart["tv"].cost();
	total += cart["chicken"].cost();
	total += cart["shirt"].cost();
	cout << "Your total is: $" << total;
}