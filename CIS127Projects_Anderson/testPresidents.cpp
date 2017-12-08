#include <cctype>
#include <ctime>
#include <fstream>
#include <iostream>
#include <list>
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

void showPresidents(bag presBag)
{
  for (presBag.first(); !presBag.isDone(); presBag.next())
  {
    Presidents pres = presBag.currentItem();
    cout << pres.getPresidentNumber() << ": " << pres.getPresidentName() << endl;
  }
}

string getPresidentName(bag presBag, int presNum)
{
  string presName = "";
  for (presBag.first(); !presBag.isDone(); presBag.next())
  {
    Presidents pres = presBag.currentItem();
    if (pres.getPresidentNumber() == presNum)
    {
      presName = pres.getPresidentName();
    }
  }
  return presName;
}

int main()
{
  printInstructions();
  bag presBag = loadPresidents();
  // showPresidents(presBag);
  int presNum, guess;
  srand((unsigned) time(0));
  do {
    presNum = rand() % presBag.size();
    guess = askPresidentNumber(getPresidentName(presBag, presNum));
  } while (guess != -1);
  return 0;
  system("pause");
}
