/* Gavin Anderson
CIS 127, Assignment 4.3
purpose: use and instruct a runner to jump hurdles on a grid*/

#include <iostream> 
#include <cassert>   
#include <cstdlib>   
#include <ctime>     
#include <string> 
#include "grid.h"
using namespace std;

extern const int east = 1;
int main()
{
	cout << "Gavin Anderson, CIS127, Assignment 4.3" << endl;
	grid aGrid(4, 23, 2, 0, east);
	aGrid.block(2, 3);
	aGrid.block(2, 7);
	aGrid.block(2, 11);
	aGrid.block(2, 15);
	aGrid.block(2, 19);
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(2);
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.turnLeft();
	aGrid.move(1);
	aGrid.turnLeft();
	aGrid.move(2);




	aGrid.display();
	system("pause");
		
	return 0;
}
/*Gavin Anderson, CIS127, Assignment 4.3
The grid:
. . . . . . . . . . . . . . . . . . . . . . .
. .       .       .       .       .       . .
      #       #       #       #       #     >
. . . . . . . . . . . . . . . . . . . . . . .
Press any key to continue . . .*/