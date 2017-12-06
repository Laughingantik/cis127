/*Gavin Anderson, CIS 127, Assignment 6.2*/
#include <string>
using namespace std;

class weeklyEmp {
public:

//--Constructors
	weeklyEmp();

	weeklyEmp(string initName,
		double initHours,
		double initRate,
		int initExemptions,
		string initFilingStatus);
	//post: A weekly emp object is initialized with five arguments:
	//		weeklyEmp an Emp("Hall, Rob", 40.0, 9.75, 3, "M");
	//		The fourth argument must be in the range of 0 to 99. The
	//		last argument is either "M" for married or "S" for single.

	//--Modifiers

	void set_hours(double thisWeeksHours);
	// Post: Set the hours worked for a given week

	void set_rate(double thisWeeksRate);
	// Post: Change the employee's hourly rate of pay

	//--Accessors

	double grossPay() const;
	//Post: Return gross pay with overtime

	double incomeTax() const;
	//Post Return the federal income tax

	double FICATax() const;
	//post: Return the social security tax

	string name() const;
	//Post: Return the employee's name

private: 
	string my_name;
	double my_hours;
	double my_rate;
	int my_exemptions;
	string my_filingStatus;

};
