#include <iostream>
#include <string>
#include "student.h" // this includs student.h
#include "compfun.h"     // for decimals

using namespace std;

void display(student aStudent)
{
  decimals(cout, 2);
  cout << "{ student: " << aStudent.name();
  cout << ", GPA = " << aStudent.GPA() << " }" << endl;
}

int main()
{ // test drivbe student: this main will vary amongst students
	cout << "Gavin Anderson, CIS127, Assignment 8.1" << endl;
  student aStudent("Nguyen", 36.5, 123.5);
  student anotherStudent("Stella", 4.0, 16.0);  // Straight A so far
  student one ("one should be 3.0", 0.0, 0.0);
  one.completedCourse( 4.0, 2.0 );
  one.completedCourse( 4.0, 4.0 );  // 4 credit A
  display( one );
  display( aStudent );
  display( anotherStudent );

  // Finish branch coverage testing of standing
  student two("two", 100.0, 30.0);
  student three( "three", 30.05, 100.0 );
  student four("four" , 60.0, 100.0 );
  student five("five ", 60.05, 100.0);
  student six ("six " , 90.0, 100.0);
  student seven("seven", 90.05, 100.0 );

  cout << one.standing() << endl;
  cout << two.standing() << endl;
  cout << three.standing() << endl;
  cout << four.standing() << endl;
  cout << five.standing() << endl;
  cout << six.standing() << endl;
  cout << seven.standing() << endl;

  system("pause");
  return 0;
}
/*Gavin Anderson, CIS127, Assignment 8.1
{ student: one should be 3.0, GPA = 3.00 }
{ student: Nguyen, GPA = 3.38 }
{ student: Stella, GPA = 4.00 }
Freshman
Senior
Sophomore
Junior
Junior
Senior
Senior
Press any key to continue . . .*/