/*================================================================================
Write a program to enter the numbers till the user wants and
at the end the program should display the largest and smallest numbers entered.
================================================================================*/

#include <iostream>

using namespace std;

int main() {
    int smallest = 0;
    int largest = 0;
    int num;

    cout << "Enter numbers (enter -1 to stop):";
    while (true) {
        cin >> num;
        if (num == -1) {
            break; // Exit the loop if -1 is entered
        }
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    cout << "Largest number: " << largest;
    cout << "Smallest number: " << smallest;

    return 0;
}
