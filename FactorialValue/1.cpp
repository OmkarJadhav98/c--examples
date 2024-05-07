/*=========================================================================================
Write a program to find the factorial value of any number entered through the keyboard.
=========================================================================================*/

#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    // Note: This will only work for small factorials that fit in an unsigned long long
    unsigned long long factorial = 1;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << number << " is: " << factorial << endl;
    return 0;
}
