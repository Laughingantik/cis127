/*Gavin Anderson
9/30/17
CIS 122 Assignment 5.1*/


#include <iostream>
#include <cmath>
#include "compfun.h" 
using namespace std;

double futureValue(double presentValue, double rate, int n) {
	double result;
	result = presentValue * pow(1 + rate, n);
	return result;
	
}

int main()
{
		/*Test drive futureValue. Compare three interest rates
		(7.5%, 8.5%, and 9.5% over three years*/
	
		decimals(cout, 2);

		cout << "Gavin Anderson, CIS 127 Assignment 5.2" << endl;
		cout << futureValue(1000.00, 7.5 / 1200.0, 36) << endl;
		cout << futureValue(1000.00, 8.5 / 1200.0, 36) << endl;
		cout << futureValue(1000.00, 9.5 / 1200.0, 36) << endl;
		system("pause");
	return 0;
}
/*
Gavin Anderson, CIS 127 Assignment 5.2
1251.45
1289.30
1328.27
Press any key to continue . . .*/
