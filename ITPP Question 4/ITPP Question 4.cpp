#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	//Display the menu
	cout << "*****************" << endl;
	cout << "1) Log a call" << endl;
	cout << "2) Exit Program" << endl;
	cout << "*****************" << endl;

	//Declare variable to hold user's option
	int option;

	while (option < 1 || option > 2)
	{
		cout << "That is an invalid option" << endl;
		cout << "Enter '1' to Log a Call or '2' to Exit Program." << endl;
		cin >> option;
	}

	//Perform the selected option
	switch (option)
	{
	case 1:

		int logcall();
		cout << "Enter the start of call and end of call times in minutes" << endl; int minutes;
		cin >> minutes;
		if (minutes > 10)
		{
			cout << "This call qualifies for a discount" << endl; double normalPrice; const double cost = 0.45;
			normalPrice = (minutes * cost);
			cout << "This is the normal price : R" << normalPrice << endl; double discountPrice;
			discountPrice = (minutes * cost) * 50 / 100;
			cout << "This is the discounted price : R" << discountPrice << endl;


		}
		else if (minutes < 10)
		{
			cout << "This call does not qualify for a discount" << endl; double normalPrice; const double cost = 0.45;
			normalPrice = (minutes * cost);
			cout << "This is the normal price : R" << normalPrice << endl;
			cout << "Your discount is : R0" << endl;
		}
		break;

	case 2:

		if (option == '2')
		{
			exit(0);
		}
		break;
	}
	
	
}