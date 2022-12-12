#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void emplName()//Start of emplName function
{
	//Declare variables
	string emplName;
	int emplID;
	double emplSalary;


	cout << "Enter Employee Name :" << endl;
	cin >> emplName;
	cout << "Enter the Employees ID number :" << endl;
	cin >> emplID;
	cout << "Enter the Employee Current Salary" << endl;
	cin >> emplSalary;
	cout << "Staff details addedd successfully" << endl;

	//Declare an ofstream object called emplinfo and open a file named salary.txt
	ofstream emplinfo;
	emplinfo.open("salary.txt");
	emplinfo << "/n" << emplName << "     " << emplID << "     R" << emplSalary << endl;
	endl;
	cout << "*****************************************" << endl;
	emplinfo.close();
}


	void emplID()
	{
		//Start of emplID function
		cout << "Enter ID:" << endl;
		cin >> emplID;

		//Declare an ifstream object named emplinfo and open a file named salary.txt
		ifstream emplinfo;
		emplinfo.open("salary.txt");

		if (emplinfo.is_open())
		{
			while (!emplinfo.eof())
			{
				getline(emplinfo, line);
				if (offset = line.find(emplID, 0))) != string::npos;
				emplName = copy(line, 1, pos(' '));
				emplID = copy(line, name, pos(' '));
				emplSalary = copy(line, ID, pos(' '));

				cout << "The employee you found is: " << emplName << endl;
				endl;
			}
		}

		else
			cout << "The employee ID was not found, please enter new staff details," << endl;
		endl;
		emplName();
		emplinfo.close();
	}


	int main()
	{
		//Declare variables
		string option;
		string emplName;
		double emplID;
		double ID;

		while (option != 3)
		{
			cout << "Welcome to Umnandi Employee consulting System." << endl;
			cout << "Please select an option" << endl;
			cout << "***********************************************" << endl;
			cout << "1) Enter new staff details" << endl;
			cout << "2) Search by ID" << endl;
			cout << "3) Exit Program" << endl;
			cin.ignore();
			getline(cin, option);

			switch (option)
			{
				case 1 :
				emplName();

				case 2 :
				emplID();

			}
			exit(0);
		}



	}

