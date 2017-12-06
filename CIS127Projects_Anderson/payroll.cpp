// Gavin Anderson, CIS 127, Assignment 6.1
#include <iostream>
#include <string>
#include "weeklyEmp.h"
#include "compfun.h"
using namespace std;


	int main() {
		string name = "?";
		double rate = 10.0;
		double hours = 40.0;
		int exemptions = 3;
		string filingStatus = "M";
		weeklyEmp emp(name, hours, rate, exemptions, filingStatus);
		show(emp);
			system("pause");
		return 0;
	}

	void show(const weeklyEmp& emp) {
		double net = emp.grossPay() - emp.incomeTax() - emp.FICATax();
		decimals(cout, 2);
		cout << "Gross Pay Income Income Tax" << endl;
		cout << "========= ==========" << endl;
		cout << emp.grossPay() << emp.incomeTax() << endl;
		emp.set_rate += 1.50;
			cout << emp.grossPay() << emp.incomeTax() << endl;
			emp.set_hours += 2.0;
			cout << emp.grossPay() << emp.incomeTax() << endl;
		cout.width(9); cout << emp.grossPay();
		cout.width(9); cout << emp.incomeTax() << endl;



	system("pause");
	return 0;

}

/*Gavin Anderson, CIS127, Assignment 6.1
Name: Lucas
Hourly Rate: 10
Hours Worked: 40
Exemptions: 2
S)ingle M)arried: M

Employee: Lucas
Gross      Income     FICAA    Net
 Pay        Tax        Tax     Pay
=======    ========   =======  =====
400.00        38.42      30.60     330.98
Press any key to continue . . .

Gavin Anderson, CIS127, Assignment 6.1
Name: Joe
Hourly Rate: 15
Hours Worked: 35
Exemptions: 1
S)ingle M)arried: S

Employee: Joe
Gross      Income     FICAA    Net
 Pay        Tax        Tax     Pay
=======    ========   =======  =====
525.00        80.90      40.16     403.94
Press any key to continue . . .
*/
