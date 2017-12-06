#include <iostream>
#include <string>
#include <cmath>
#include "compfun.h"
#include "student.h"
using namespace std;

//constructors
student::student() {
	my_name = "Unknown";
	my_credits = 0.0;
	my_qualityPoints = 0.0;
}

student::student(string initName,
	double initCredits,
	double initQualityPoints) {
	my_name = initName;
	my_credits = initCredits;
	my_qualityPoints = initQualityPoints;
}

//modifiers
void student::completedCourse(double credits, double numericGrade)
{
	my_credits += credits;
	my_qualityPoints += credits * numericGrade;
}

//accessors
double student::GPA() const {
	return my_qualityPoints / my_credits;
}

string student::standing() const {
	if (my_credits < 30)
		return "Freshman";
	else if (my_credits < 60)
		return "Sophomore";
	else if (my_credits < 90)
		return "Junior";
	else if (my_credits >= 90)
		return "Senior";

}

string student::name() const {
	return my_name;
}
