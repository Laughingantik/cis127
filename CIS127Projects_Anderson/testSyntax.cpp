// Write a program that indirectly manipulates one bankAccount object by making
//   one withdrawal and one deposit using the arrow operator ->. Show the final
//   balance, again with the arrow operator.
#include <iostream>
#include "baccount.h"
using namespace std;

int main()
{
	cout << "Gavin Anderson, CIS127, Assignment 12.2" << endl;

	cout << "Start Balance: ";
	double balance;
	cin >> balance;
	bankAccount account("Gavin Anderson", balance);
	bankAccount* bp = &account;

	cout << "Deposit: ";
	double deposit;
	cin >> deposit;
	bp->deposit(deposit);

	cout << "New Balance: " << bp->balance() << endl;

	cout << "Withdraw: ";
	double withdrawal;
	cin >> withdrawal;
	bp->withdraw(withdrawal);

	cout << "Final Balance: " << bp->balance() << endl;
	return 0;
}
/*
Gavin Anderson, CIS127, Assignment 12.2
Start Balance: 100
Deposit: 123.45
New Balance: 223.45
Withdraw: 111.11
Final Balance: 112.34*/