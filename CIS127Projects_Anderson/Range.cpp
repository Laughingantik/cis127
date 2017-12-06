/*Gavin Anderson
CIS127, Assignment 3.1
Purpose: To determine the range of a projectile */

#include<iostream>
#include<cmath>
#include <cstdlib>

using namespace std;

int main() 
{
	cout << "Gavin Anderson, CIS127, Assignment 3.1";
	double  angle, velocity, radangle;
	cout << "Takeoff Angle (in degrees)";
	cin >> angle;

	cout << "Initial Velocity (meters per second)";
	cin >> velocity;

	radangle = (3.14159 / 180)*angle;
	double range = sin(2.0*radangle)*pow (velocity, 2)/ 9.8;
	cout << "Range = " << range << " meters" << endl;
	system("pause");


	return 0;
}
/* DEBUG OUTPUT:
'CIS127Projects_Anderson.exe' (Win32): Unloaded 'C:\Windows\SysWOW64\kernel32.dll'
'CIS127Projects_Anderson.exe' (Win32): Unloaded 'C:\Windows\SysWOW64\ucrtbased.dll'
The thread 0x16c0 has exited with code 0 (0x0).
The thread 0x1938 has exited with code 0 (0x0).
The thread 0x1da8 has exited with code 0 (0x0).
The program '[10308] CIS127Projects_Anderson.exe' has exited with code 0 (0x0).
*/