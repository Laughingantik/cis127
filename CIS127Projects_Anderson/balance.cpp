#include <iostream>
#include <string>
#include "baccount.h"
using namespace std;

int main()
{
	string name;
	double start;
	double amount;

	cout << "Gavin Anderson, CIS 127, Assignment 4.2" << endl;
	cout << "Enter account holder's name: ";
	cin >> name;
	cout << "Enter starting balance: ";
	cin >> start;

		//bank account creation
	bankAccount one(name, start);

	cout << "Enter amount to deposit: ";
	cin >> amount;
	one.deposit(amount);
	cout << "Enter the amount to withdraw: ";
	cin >> amount;
	one.withdraw(amount);
	cout << one.name () << "'s  balance: " << one.balance () << endl;

	system("pause");
	return 0;
}
/*Gavin Anderson, CIS 127, Assignment 4.2