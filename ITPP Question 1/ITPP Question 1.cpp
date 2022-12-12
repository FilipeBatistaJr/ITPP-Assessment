#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int noCars=0;
    double Hours[noCars];
    double charge;
    int index;
    cout << "Welcome to the Mall of Mzanzi Park Charge System" << endl;
    cout << "How many cars would you like to check?" << endl;
    cin >> noCars;
    for (index = 0; index <= noCars - 1; index++)
        {
        cout << "Enter the number of hours for car" << index+1 << ":" << endl;
        cin >> Hours[noCars];
        if (Hours[noCars]<=3)
        {
        cout <<  endl;
        cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
        cout << index+1 << setw(10) << Hours[noCars] << setw(10) << "2.00" << endl;
        }
        else if (Hours[noCars]>=24)
        {
        cout << endl;
        cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
        cout << index+1 << setw(10) << Hours[noCars] << setw(10) << "10.00" << endl;
        }
        else if (Hours[noCars]> 3)
        {
        Hours =((Hours[noCars]-3) *0.50) +3;
        cout <<  endl;
        cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
        cout << index+1 << setw(10)<< Hours[noCars] << setw(10) << Hours << endl;
        }
        }
}

