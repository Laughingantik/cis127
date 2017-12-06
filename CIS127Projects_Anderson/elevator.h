
class elevator {
public:
	// constructors
	elevator();
	elevator::elevator(int initFloor);
	// modifiers
	void upFloor();
	void downFloor();
	void select(int newFloor);
	// accessors
	int getFloor();
private:
	int floor;
};
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