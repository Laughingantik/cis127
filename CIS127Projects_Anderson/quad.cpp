// Gavin Anderson, CIS 127, Assignment 7.1
#include <iostream>
#include "quad.h"
using namespace std;

quadraticEquation::quadraticEquation() {
		double my_a = 0;
		double my_b = 0;
		double my_c = 0;
		return ;
}

quadraticEquation::quadraticEquation(double initA, double initB, double initC) {
	double my_a = initA;
	double my_b = initB;
	double my_c = initC;
}


double quadraticEquation::root1() const {
	
	return (-my_b + sqrt(my_b*my_b - 4 * my_a*my_c)) / (2 * my_a);
	
}

double quadraticEquation::root2() const {
	return (-my_b - sqrt(my_b*my_b - 4 * my_a*my_c)) / (2 * my_a);
}
bool quadraticEquation::hasRealRoots() const {
	if (my_b*my_b - 4 * my_a*my_c >= 0.0)
		return true;
	else
		return false;
}

void quadraticEquation::display() const {
		cout << my_a << "x^2";
		if (my_b >= 0)
			cout << " + " << my_b << "x";
		else
			cout << " - " << abs(my_b) << "x";
		if (my_c >= 0)
			cout << " + " << my_c << endl;
		else
			cout << " " << abs(my_c) << endl;
		
}

//could not compile :( I did spend hours on this trying
