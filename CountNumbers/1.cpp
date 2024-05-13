/*===============================================================================
Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and zeros entered.
=================================================================================*/

#include <iostream>

using namespace std;

int main() {
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int num;

    cout << "Enter numbers (enter -1 to stop):";
    while (true) {
        cin >> num;
        if (num == -1) {
            break; // Exit the loop if -1 is entered
        } else if (num > 0) {
            positiveCount++; // Increment positiveCount for positive input
        } else if (num < 0) {
            negativeCount++; // Increment negativeCount for negative input
        } else {
            zeroCount++; // Increment zeroCount for zero input
        }
    }

    cout << "Positive numbers: " << positiveCount ;
    cout << "Negative numbers: " << negativeCount ;
    cout << "Zeroes: " << zeroCount;

    return 0;
}
