#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	//Declare variables
	double loan;
	double rate;
	string loan_length;
	double years;
	double month_formula;
	ofstream fees;

	//Outputs
	cout << "Enter the amount of the loan:" << endl;
	cin >> loan;

	cout << "Enter the rate of the loan: (e.g. 5.35%)" << endl;
	cin >> rate;

	cout << "How long is the loan? Enter 'Y' or 'M'" << endl;
	cin >> loan_length;
	if (loan_length == "Y")
	{
		cout << "Years" << endl;
	}
	else if (loan_length == "M")
	{
		cout << "Months" << endl;
	}
	fees.open("loan.txt");

	cout << "How many years is your loan for?" << endl;
	cin >> years;

	//Determines your monthly repayment
	month_formula = (loan * (1 + (rate / 100)) / (12 * years));
	cout << "This is your monthly repayment : R" << month_formula << endl;
	cout << endl;
	fees << "The following is your loan calculation: " << endl << endl << "Loan amount       = R" << loan << endl
		<< "Rate             =" << rate << endl << "Years           =" << years << endl
		<< endl << "Monthly repayments = R" << month_formula << endl;
	fees.close();
	cout << "All information has been placed into a file" << endl;
}


