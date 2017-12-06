//Gavin Anderson, CIS 127, Assignment 10.1
// test11a A bag Object
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

typedef string BAG_ELEMENT_TYPE;
//INCLUDE bag.cpp HERE AND NOT IN THE PROJECT
#include "bag.cpp" // For a bag class that requires the previous typedef

char getOption()
{
  char result = '?';

  while(true)
  {
    cout << "Enter option: A)dd D)isplay Q)uit: ";
    cin >> result;
    result = toupper(result);
    if(    result == 'A'
        || result == 'D'
        || result == 'Q' )
       break;
  }
  return result;
}

void addTo(bag & stringBag)
{
  string stringToAdd;
  cout << "Enter string: ";
  cin >> stringToAdd;
  stringBag.add(stringToAdd);
}

void show(const bag & stringBag)
{
  cout << "The bag: ";
  int count = 0;
  for(stringBag.first(); !stringBag.isDone(); stringBag.next() )
  {
	  cout << stringBag.currentItem();
	  count++;
	  if( count < stringBag.size())
		  cout << ", ";
  }
  cout << endl;
}

void explainProgram()
{
  cout << "Maintain a bag of strings" << endl;
}

int main()
{
	cout << "Gavin Anderson, CIS 127, Assignment 10.1";
	 bag stringBag;
	 char option;

	 explainProgram();
	 while(true)
	 {
		option = getOption();
		if( option == 'A')
        addTo(stringBag);
   	else if( option == 'D')
		  show(stringBag);
		else if( option == 'Q')
        break;
		else
		  cout << "**ERROR: Something is wrong with getOption" << endl;
	 }

	 return 0;
}