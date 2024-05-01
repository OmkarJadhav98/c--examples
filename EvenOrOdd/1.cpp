/*==============================================================================================
Write a program to Check whether the number is even or odd using switch statement..
================================================================================================
 */
#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a number: ";

    cin >> number;

    switch (number % 2)
    {
        case 0:
            cout << number << " is a Even number";
            break;
        case 1:
            cout << number << " is a odd number";
            break;
        default:
            cout << number << "Unexpected error founded....";
    }
}

