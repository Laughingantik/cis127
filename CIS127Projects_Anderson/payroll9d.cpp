#include <fstream> 
#include <iostream> 
#include <iomanip>

#include "weeklyEmp.h" 

using namespace std;

int main()
{
	ifstream inFile("EMPLOYEE.DAT");
	ofstream fout("PAYROLL.RPT");
	if (!inFile)
	{
		cout << "CIS 127, Gavin Anderson, Assignment 9.2" << endl;
		cout << "**Error opening file 'EMPLOYEE.DAT'" << endl;
	}
	else
	{
		fout << "CIS 127, Gavin Anderson, Assignment 9.2" << endl
			<< "   Pay    Hours    Gross    Income    FICA      Net   Employee\n"
			<< "  Rate   Worked      Pay      Tax      Tax      Pay   Name\n"
			<< " =====   ======   ======   ======   ======   ======   ========\n";
		string fName, lName, name;
		double hours, rate, totGross = 0.0;
		int exempts;
		string status;
		double totHours = 0.0;
		double totIncome = 0.0;
		double totFica = 0.0;
		double totNet = 0.0;
		fout << fixed << setprecision(2);
		while (inFile >> fName >> lName >> hours >> rate >> exempts >> status)
		{
			string name = lName + ", " + fName;
			weeklyEmp anEmp(name, hours, rate, exempts, status);
			double net = anEmp.grossPay() - anEmp.incomeTax() - anEmp.FICATax();
			totGross += anEmp.grossPay();
			totIncome += anEmp.incomeTax();
			totFica += anEmp.FICATax();
			totHours += hours;
			totNet += net;
			fout << setfill(' ') << setw(6) << rate << setfill(' ')
				<< setw(9) << hours
				<< setw(9) << anEmp.grossPay()
				<< setw(9) << anEmp.incomeTax()
				<< setw(9) << anEmp.FICATax()
				<< setw(9) << net
				<< " "
				<< anEmp.name()
				<< endl;
		}
		fout << " ------ ------ ------ ------ ------" << endl;
		fout << setw(6) << "Totals"
			<< setw(9) << totHours
			<< setw(9) << totGross
			<< setw(9) << totIncome
			<< setw(9) << totHours
			<< setw(9) << totNet;
	}
	fout.close();
	cin.get();
	system("pause");
	return 0;
}
/*FOUT file output
CIS 127, Gavin Anderson, Assignment 9.2
Pay    Hours    Gross    Income    FICA      Net   Employee
Rate   Worked      Pay      Tax      Tax      Pay   Name
=====   ======   ======   ======   ======   ======   ========
10.45    38.00   397.10    26.16    30.38   340.56 Greene, Ross
12.00    42.00   516.00    89.42    39.47   387.11 Kristner, Mary
9.99    30.50   304.69    36.34    23.31   245.04 Nicholson, Mellisa
11.57    40.00   462.80    63.49    35.40   363.91 Woodley, Samuel
------ ------ ------ ------ ------
Totals   150.50  1680.59   215.41   150.50  1336.62
*/

