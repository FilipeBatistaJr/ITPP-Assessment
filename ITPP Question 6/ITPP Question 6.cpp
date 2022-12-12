#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "*******************************" << endl;
	cout << "Welcome to Radiant Office Park" << endl;
	cout << "Please select an option" << endl;
	cout << "1) Add a car registration" << endl;
	cout << "2) Exit program" << endl;
	cout << "***************************" << endl;

	//Declare 2d arrays and variables
	int carsRegister[500][2];
	int x;
	int numCars;
	float licenseNo;
	float registrationNo;

	//Declare variable to hold user's option
	int option;

	while (option < 1 || option > 2)
	{
		cout << "That is an invalid option" << endl;
		cout << "Please enter '1' to add a car registration or '2' to exit program." << endl;
		cin >> option;

	}

	for (x = 1; numCars; x++)
	{

		//Perform the selected option
		switch (option)
		{
		case 1:

			int registerCar();
			if (option == '1');
			{
				cout << "How many cars are you registering? :" << endl;
				cin >> numCars;
				if (numCars < 0 || numCars > 500);
				cout << "You can not enter that amount" << endl;

				cout << "Enter Driver License Number for car: " << endl;
				cin >> licenseNo;
				cout << "Enter Car registration number for car: " << endl;
				cin >> registrationNo;
				cout << "The cars have been successfully registered!" << endl;
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
}