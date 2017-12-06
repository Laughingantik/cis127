// same as 8H.cpp
#include <iostream>
#include "elevator.h" // student work is in elevator, elevator.h and elevator.cpp
int main()
{
	elevator aLift(1);
	aLift.select(5);
	aLift.select(3);

	system("pause");
	return 0;
}
/*Starting on floor 1
Going up to floor 2
Going up to floor 3
Going up to floor 4
Going up to floor 5
Open at 5
Starting on floor 5
Going down to floor 4
Going down to floor 3
Open at 3
Press any key to continue . . .*/
