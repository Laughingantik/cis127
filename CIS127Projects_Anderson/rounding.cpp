
#include <cmath>
#include <iostream>
using namespace std;

//completely implement double round (double x, int n) here

double round(double x, int n) {

x = x * pow(10.0, n);
x = x + 0.5;
x = floor(x);
x = x / pow(10.0, n);
return x;
}



int main()
{
	cout << "Gavin Anderson, CIS127, Assignment 5.1" << endl;
	cout << round(-2.9, 0) << endl; //output should be -3
	cout << round(-2.59, 1) << endl; //output should be -2.6
	cout << round(0.0059, 2) << endl; //output should be 0.01
	cout << round(1.23467, 3) << endl; //output should be 1.235
	cout << round(9.999999, 4) << endl; //output should be 10.0000
	system("pause");
	return 0;
	
}
/*Gavin Anderson, CIS127, Assignment 5.1
-3
-2.6
0.01
1.235
10
Press any key to continue . . .*/

