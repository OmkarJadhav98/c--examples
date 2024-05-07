/*===============================================================
Write a program to calculate HCF of Two given number.
===============================================================*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, hcf;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    hcf = 1; // Start with the lowest possible HCF
    int min = (num1 < num2) ? num1 : num2; // Find the smaller number

    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Found the HCF
            break; // No need to check further
        }
    }

    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
    return 0;
}
