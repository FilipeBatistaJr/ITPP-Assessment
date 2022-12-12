#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int studMarks[50][2];
    char option;
    int finalMark;
    int x;
    int testMark;
    int examMark;
    double avgMark;

    while (option == 'y' || option == 'Y')
    {
        for (x = 0; x = 50; x++)
        {
            cout << "Student number" << x << endl;
            cout << "Test Mark (0-100)" << endl;
            cin >> testMark;
            testMark = studMarks[x][1];
            if (testMark < 0 || testMark > 100);
            cout << "The mark entered is invalid" << endl;

            else

                cout << "Exam Mark (0-100)" << endl;
            cin >> examMark;
            examMark = studMarks[x][2];
            if (examMark < 0 || examMark > 100);
            cout << "The mark entered is invalid" << endl;


            else

                cout << "Would you like to enter another students mark? Y or N" << endl;
            cin >> option;
        }
    }

    for (x = 1; studMarks.eof; x++)
    {
        cout << "Student number" << x << endl;
        cout << "==============" << endl;

        cout << "Test Mark: " << studMarks[x][1] << "/100" << endl;
        cout << "Exam Mark: " << studMarks[x][2] << "/100" << endl;
        finalMark = (0.6 * (studMarks[x][2])) + (0.4 * (studMarks[x][1]));
        finalMark = math.round(finalMark, 0).Dump();

        avgMark = (finalMark + finalMark) / x;
        cout << "Final Mark: " << finalMark << "/100" << endl;
    }

    cout << "The Class Average: " << avgMark << endl;


}
        
        
        

    


    













