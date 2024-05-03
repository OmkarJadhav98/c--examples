/*==========================================================================
Write a program to find the Maximum of Two Numbers using switch statement.
==========================================================================*/

#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    double max;
    int compareResult;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Compare num1 and num2 and store the result in compareResult
    compareResult = (num1 > num2) - (num1 < num2);

    switch (compareResult) {
        case 1:  // num1 is greater than num2
            max = num1;
            break;
        case -1: // num1 is less than num2
            max = num2;
            break;
        default: // num1 is equal to num2
            max = num1; // or num2, since they are equal
            break;
    }

    cout << "The maximum of " << num1 << " and " << num2 << " is : " << max << endl;

    return 0;
}
