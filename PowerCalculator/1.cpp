/*====================================================================================
Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.
(Do not use Java built-in method)
====================================================================================*/

#include <iostream>
using namespace std;

int main() {
    double base, result = 1.0;
    int exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent (a positive integer): ";
    cin >> exponent;

    if (exponent >= 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        cout << base << " raised to the power of " << exponent << " is: " << result;
    } else {
        cout << "Exponent must be a non-negative integer.";
    }
    return 0;
}
