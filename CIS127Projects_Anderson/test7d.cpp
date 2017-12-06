// Gavin Anderson, CIS 127, Assignment 7.1
#include <iostream>
using namespace std;
#include "quad.h" // includes quad.h and quad.cpp

int main()
{
	double a, b, c;

	cout << "Gavin Anderson, CIS 127, Assignment 7.1" << endl;
	cout << "Enter three coefficients for equation ax^2 + bx + c: ";
	cin >> a >> b >> c;
	cout << endl;
	quadraticEquation qe(a, b, c);

	// qe.display();  // in book, but you don't really need to call here

	if (qe.hasRealRoots())
	{
		cout << "The roots for equation ";
		qe.display();
		cout << "are " << qe.root1() << "(root 1) and " << qe.root2() << "(root 2) " << endl << endl;
	}
	else
	{
		cout << "The equation ";
		qe.display();
		cout << "has no real roots for the coefficients given." << endl << endl;
	}

	system("pause");
	return 0;
}
//could not compile :( I did spend hours on this trying