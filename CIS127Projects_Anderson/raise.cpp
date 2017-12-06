/*Gavin Anderson, CIS 127, Assignment 6.2*/

#include <iostream>
#include <string>
#include "weeklyEmp.h"
#include "compfun.h"


using namespace std;



void show(const weeklyEmp& emp);


int main() {
	cout << "Gavin Anderson, CIS 127, Assignment 6.2" << endl;
	cout << "Gross Pay        Income Tax" << endl;
	cout << "=========       ============" << endl;
	decimals(cout, 2);
	weeklyEmp emp("?", 40.0, 10.0, 3, "M");
	show(emp);
	emp.set_rate(11.5);
	show(emp);
	emp.set_hours(43.0);
	show(emp);
	
	system("pause");
	return 0;
}

void show(const weeklyEmp& emp) {
		cout.width(9);
		cout << emp.grossPay();
		cout.width(13);
		cout << emp.incomeTax() << endl;
	}
/*
Gavin Anderson, CIS 127, Assignment 6.2
Gross Pay        Income Tax
=========       ============
400.00        32.51
460.00        41.51
511.75        49.27
Press any key to continue . . .*/
	
