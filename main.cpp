#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

float x, y;
float scr;
int choice;


int main() 
{

for(;;)
{

    cout << "----------------------------Calculator----------------------------";
    cout << endl << "1.Addition";
    cout << endl << "2.Subtration";
    cout << endl << "3.Multiplication";
    cout << endl << "4.Division";
    cout << endl << "5.End" << endl;

    cout << endl << "Choice: ";
    cin >> choice;


    system("clear");

    switch(choice)
    {
    case 1:
        cout << endl << "----------------------------ADDITION----------------------------" << endl;
        cout << "Write your first number: " << endl;
        cin >> x;
        cout << "Write your second number: " << endl;
        cin >> y;

        cout << endl << "Your score is " << x + y << endl;
        cout << "Press Enter to return." << endl;

        break;

    case 2:
        cout << endl << "----------------------------SUBTRATION----------------------------" << endl;
        cout << "Write your first number: " << endl;
        cin >> x;
        cout << "Write your second number: " << endl;
        cin >> y;

        cout << endl << "Your score is " << x - y << endl;
        cout << "Press Enter to return." << endl;

        break;

    case 3:
        cout << endl<< "----------------------------MULTIPLICATION----------------------------" << endl;
        cout << "Write your first number: " << endl;
        cin >> x;
        cout << "Write your second number: " << endl;
        cin >> y;

        cout << endl << "Your score is " << x * y << endl;
        cout << "Press Enter to return." << endl;

        break;

    case 4:
        cout << endl << "----------------------------DIVISION----------------------------" << endl;;
        cout << "Write your first number: " << endl;
        cin >> x;
        cout << "Write your second number: " << endl;
        cin >> y;

        if (x && y != 0)
        {
            cout << endl << "Your score is " << x / y << endl;
            cout << "Press Enter to return." << endl;

            break;
        }
        else
        {
            cout << "Don't divided by zero!" << endl;
            cout << "Press Enter to return." << endl;

            break;
        }

    case 5:
        exit(0);

    default: cout << endl<< "There is no options in menu!" << endl;
    cout << "Press Enter to return." << endl;
    }

    getchar(); getchar();
    system("clear");

}

    return 0;
}
