/*==================================================================================================
Write a program that reads a set of integers, and then prints the sum of the even and odd integers.
==================================================================================================*/

#include <iostream>
using namespace std;

int main() {
    int count, num, evenSum = 0, oddSum = 0;
    cout << "Enter the number of integers: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter an integer: ";
        cin >> num;

        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    cout << "Sum of even integers: " << evenSum;
    cout << "Sum of odd integers: " << oddSum;
    return 0;
}
