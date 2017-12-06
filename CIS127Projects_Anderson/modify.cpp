#include <iostream>
#include "grid.h"
using namespace std;
extern const int north = 0;

void modifyGrid(grid & g)
{
	g.block(0, 0);
	g.block(0, 1);
	g.block(0, 2);
	g.block(0, 3);
	g.block(0, 4);
	g.block(1, 0);
	g.block(1, 4);
	g.block(2, 0);
	g.block(2, 4);
	g.block(3, 0);
	g.block(3, 4);
	g.block(4, 0);
	g.block(4, 1);
	g.block(4, 2);
	g.block(4, 3);
	g.block(4, 4);
	g.putDown(1, 1);
	g.putDown(1, 2);
	g.putDown(1, 3);
	g.putDown(2, 1);
	g.putDown(2, 3);
	g.putDown(3, 1);
	g.putDown(3, 2);
	g.putDown(3, 3);

}
int main()
{
	cout << "Gavin Anderson, CIS 127 Assignment 5.3" << endl;
	grid tarpit(5, 5, 2, 2, north);


	modifyGrid(tarpit);
	tarpit.display();

	system("pause");
	return 0;
}
/* Questions
1. When Changing from reference parameter to value parameter (deleting the &) the grid doesnt show the "O"s or "#"s,
I believe this is because the system isnt registering that g is part of the grid as in not passing the parameters reference 
to g.
2. When you change grid to a constant parameter the program becomes riddled with errors from lines 8-31. I believe this happens
because the parameter is being pass in constant but the data inside is not being copied with it.


Gavin Anderson, CIS 127 Assignment 5.3
The grid:
# # # # #
# O O O #
# O ^ O #
# O O O #
# # # # #
Press any key to continue . . .*/