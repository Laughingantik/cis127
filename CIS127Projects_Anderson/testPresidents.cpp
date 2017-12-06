#include <list>
#include <iostream>
#include <fstream>
#include <string>
#include "president.h"

using namespace std;

typedef Presidents BAG_ELEMENT_TYPE;
#include "bag.cpp"

void printInstructions()
{
  cout << "Presidents' Game" << endl;
  cout << "Guess the number of each President" << endl;
  cout << "(Guess -1 to exit the game)" << endl;
}

int askPresidentNumber(string presidentName)
{
  int presidentNumber;
  cout << "> What is the president number of " << presidentName << "? ";
  cin >> presidentNumber;
  return presidentNumber;
}

bag loadPresidents()
{
  bag presidents;
  ifstream file("PresidentDataBase.txt");
  string number, name, birthDeath, tookOffice, leftOffice, party, previousOffice, vicePresident;
  while (!file.eof())
  {
    getline(file, number);
    getline(file, name);
    getline(file, birthDeath);
    getline(file, tookOffice);
    getline(file, leftOffice);
    getline(file, party);
    getline(file, previousOffice);
    getline(file, vicePresident);
    Presidents pres(atoi(number.c_str()), name, birthDeath, tookOffice, leftOffice, party, previousOffice, vicePresident);
    presidents.add(pres);
  }
  return presidents;
}

int main()
{
  printInstructions();
  bag presBag = loadPresidents();
  // ...
  for (presBag.first(); !presBag.isDone(); presBag.next())
  {
    Presidents pres = presBag.currentItem();
    cout << pres.getPresidentNumber() << ": " << pres.getPresidentName() << endl;
  }
  // ...
  // int guess;
  // do {
  //   guess = askPresidentNumber("Barack Obama");
  // } while (guess != -1);
  return 0;
}
