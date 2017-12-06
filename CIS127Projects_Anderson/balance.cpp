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
/*Gavin Anderson, CIS 127, Assignment 4.2 Enter account holder's name: samir Enter starting balance: 100 Enter amount to deposit: 20 Enter the amount to withdraw: 30 samir's balance: 90  Gavin Anderson, CIS 127, Assignment 4.2 Enter account holder's name: john Enter starting balance: 1000 Enter amount to deposit: 50 Enter the amount to withdraw: 200 john's balance: 850 Press any key to continue . . .  */