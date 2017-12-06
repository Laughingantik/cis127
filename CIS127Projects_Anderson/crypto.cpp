/*Gavin Anderson
CIS127, Assignment 4.1
Purpose: To make a secret message with strings and ints*/

#include <iostream>
#include <string>

using namespace std;

string word1, word2, word3, word4, word5, message;
int int1, int2, int3, int4, int5;


int main()
{
	cout << "Gavin Anderson, CIS127, Assignment 4.1" << endl;
	cout << "Enter 5 words: ";
	cin >> word1 >> word2 >> word3 >> word4 >> word5;
	
	cout << "enter 5 integers: ";
	cin >> int1 >> int2 >> int3 >> int4 >> int5;
	cout << "secret message: " << word1[int1] << word2[int2] << word3[int3] << word4[int4] << word5[int5] << endl;
	system("pause");

	return 0;
}
/*Gavin Anderson, CIS127, Assignment 4.1 Enter 5 words: cheap energy can cause problems enter 5 integers: 4 2 1 0 5 secret message: peace Press any key to continue . . .  Gavin Anderson, CIS127, Assignment 4.1 Enter 5 words: programing is very complex work enter 5 integers: 3 0 0 5 2 secret message: giver Press any key to continue . . .
*/
