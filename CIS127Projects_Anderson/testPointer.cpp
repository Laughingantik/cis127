
/*Answer this one question:
If you pass the double by value to the function, why does the value of the double change in the main after you return from the function?
You can just add it to your output comments after the main.
*/

//Gavin Anderson, CIS 127, Assignment 12.1
#include <iostream>
using namespace std;

void display(double &ptr, double value)
{
	ptr = value;
	value = 42;
}

int main()
{
	double x = 921;
	double* ptr = &x;
	cout << "Gavin Anderson, CIS 127, Assignment 12.1" << endl;
	cout << "The original address of double x is: " << &x << endl;
	cout << "The original value of double x is: " << x << endl;
	cout << "The original address of pointer ptr is: " << &ptr << endl;
	cout << "The original value of pointer ptr is: " << ptr << endl;
	cout << "The original dereferenced value of pointer ptr is: " << *ptr << endl;
	cout << endl;

	double y = 1842;
	double* pnt = &y;
	cout << "The function address of double y is: " << &y << endl;
	cout << "The function value of double y is: " << y << endl;
	cout << "The function address of pointer pnt is: " << &pnt << endl;
	cout << "The function value of pointer pnt is:" << pnt << endl;
	cout << "The function dereferenced value of pointer pnt is: " << *pnt << endl;
	cout << endl;

	display(*ptr, y);
	cout << "The new address of double x is: " << &x << endl;
	cout << "The new value of double x is: " << x << endl;
	cout << "The new address of pointer ptr is: " << &ptr << endl;
	cout << "The new value of pointer ptr is: " << ptr << endl;
	cout << "The new dereferenced value of pointer ptr is: " << *ptr << endl;
	cout << endl;

	system("pause");
	return 0;
}
/*
Gavin Anderson, CIS 127, Assignment 12.1
The original address of double x is: 000000946719FBB8
The original value of double x is: 921
The original address of pointer ptr is: 000000946719FBD8
The original value of pointer ptr is: 000000946719FBB8
The original dereferenced value of pointer ptr is: 921

The function address of double y is: 000000946719FBF8
The function value of double y is: 1842
The function address of pointer pnt is: 000000946719FC18
The function value of pointer pnt is:000000946719FBF8
The function dereferenced value of pointer pnt is: 1842

The new address of double x is: 000000946719FBB8
The new value of double x is: 1842
The new address of pointer ptr is: 000000946719FBD8
The new value of pointer ptr is: 000000946719FBB8
The new dereferenced value of pointer ptr is: 1842

Press any key to continue . . .
*/


/* when you pass by reference, you're passing the memory location
when you pass by value, you're passing the value at the memory location, which is given a new memory location.
*/