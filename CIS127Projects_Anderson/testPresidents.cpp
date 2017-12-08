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

void printHeading()
{
  system("cls");
  cout << "Gavin Anderson" << endl;
  system("date /t");
  cout << endl << endl;
}

void printInstructions()
{
  cout << "Presidents' Game" << endl;
  cout << "Guess the number of each President" << endl;
  cout << "(Guess -1 to exit the game)" << endl;
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

int askPresidentNumber(string presidentName)
{
  int presidentNumber;
  cout << "> What is the president number of " << presidentName << "? ";
  cin >> presidentNumber;
  return presidentNumber;
}

int main()
{
  printHeading();
  printInstructions();
  bag presBag = loadPresidents();
  int index, guess, correct = 0, total = 0;
  srand((unsigned) time(0));
  do {
    index = rand() % presBag.size();
    total += 1;
    presBag.setIndex(index);
    guess = askPresidentNumber(presBag.currentItem().getPresidentName());
    if (guess != -1)
    {
      if (guess == index)
      {
        cout << "Congratulations! That is correct." << endl;
        correct += 1;
        cout << presBag.currentItem() << endl;
        presBag.remove(presBag.currentItem());
      }
      else
      {
        cout << "Sorry. That is not correct." << endl;
        cout << presBag.currentItem() << endl;
      }
      cout << "Score: " << to_string(correct) << " out of " << to_string(total) << endl;
    }
  } while (guess != -1);
  cout << "Thank you for playing!" << endl;
  system("pause");
  return 0;
}
