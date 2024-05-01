/*========================================================================================================
  Write a program to read gender(M/F and print the corresponding gender using a switch statement..
========================================================================================================*/
#include <iostream>

using namespace std;

int main()
{
    char gender = 0;
    cout << "Enter gender(M/F): ";
    cin >> gender;

    switch (gender)
    {
        case 'M':
        case 'm':
            cout << "Male";
            break;
        case 'F':
        case 'f':
            cout << "Female";
            break;
        default:
            cout << "Invalid input. Please enter 'M' for 'Male' and 'F' for 'Female' ";
    }
}

