// Gavin Anderson, CIS 127, Assignment 7.1
#include "grid.h"
#include <iostream>
using namespace std;

extern const int north = 0;

int main() {
	cout << "Gavin Anderson, CIS 127, Assignment 7.1" << endl;

	grid g(10, 10, 8, 8, north);

	g.display();
	g.move(5);
	g.turnAround();
	g.move(3);
	g.turnRight();
	g.move(6);
	g.display();

	system("pause");
	return 0;
}
/*Gavin Anderson, CIS 127, Assignment 7.1
The grid:
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . ^ .
. . . . . . . . . .
The grid:
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . .   .
. . . . . . . .   .
. . . . . . . .   .
. . <             .
. . . . . . . .   .
. . . . . . . .   .
. . . . . . . . . .
Press any key to continue . . .*/