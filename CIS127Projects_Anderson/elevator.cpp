#include "elevator.h"
#include <string>
#include <iostream> 
using namespace std;

// constructors

elevator::elevator()
{
	floor = 1;
}

elevator::elevator(int initFloor)
{
	floor = initFloor;
}

// modifiers

void elevator::upFloor()
{
	cout << "Going up to floor " << getFloor() + 1 << endl;
	floor += 1;
}

void elevator::downFloor()
{
	cout << "Going down to floor " << getFloor() - 1 << endl;
	floor -= 1;
}

void elevator::select(int newFloor)
{
	cout << "Starting on floor " << getFloor() << endl;
	while (getFloor() < newFloor) upFloor();
	while (getFloor() > newFloor) downFloor();
			cout << "Open at " << getFloor() << endl;
}


// accessors

int elevator::getFloor()
{
	return floor;
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