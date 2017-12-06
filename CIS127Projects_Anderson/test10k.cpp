// File name: test10k.cpp, same as 10k.cpp
// Caution: 10K inputs tests.dat while 10j inputs test.dat
// tests.dat has floats while test.dat has integer
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "stats.cpp" // includes stats.cpp here after you write and not in project

void show(const stats & tests) // Be sure this is const reference with &
{
  cout << "Statistics for a set of tests"   << endl;
  cout << "     Size: " << tests.size()     << endl;
  cout << "     Mean: " << tests.mean()     << endl;

  cout << "     High: " << tests.max()      << endl;
  cout << "      Low: " << tests.min()      << endl;
  
  cout << "   Median: " << tests.median()   << endl;
  cout << " Variance: " << tests.variance() << endl;
  cout << "Stand Dev: " << tests.standardDeviation() << endl;
  tests.display();
}

int main()
{
	cout << "Gavin Anderson, CIS 127, Assignment 10.2";
  string fileName;
  cout << "Enter file name: "; 
  cin >> fileName;  
  ifstream inFile( fileName.c_str() );

  double x = 0.0;
  stats tests(24);

  while(inFile >> x)  
  {
    tests.add(x);
  }
  tests.sort();
  show(tests);

 tests.add(100.00);
  tests.add( 40.5);
  tests.sort();
  show(tests);

  return 0;
}

