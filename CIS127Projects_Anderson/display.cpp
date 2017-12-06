//I feel as if im close but have hit a wall mentally on this one
#include <iostream>
#include "baccount.h"
using namespace std;


void display(const bankAccount & anAcct) //pass by reference
{

	string name = anAcct.name();
	double money = anAcct.balance();
	int space = name.find(" ");
	string firstName, lastName;
	firstName = name.substr(0, space);
	lastName = name.substr(space, 10);
	cout << "{ bankAccount : " << lastName << ", " << firstName << ", $" << money << " }" << endl;
	
	
	
}

int main()
{
	bankAccount a("Annie Hill", 123.00);
	bankAccount b("Bob Becker", 45.60);
	cout << "Gavin Anderson, CIS 127, Assignment 5.4" << endl;
	display(a);
	display(b);
	system("pause");
	return 0;
}
/*
Gavin Anderson, CIS 127, Assignment 5.4
{ bankAccount :  Hill, Annie, $123 }
{ bankAccount :  Becker, Bob, $45.6 }
Press any key to continue . . .*/