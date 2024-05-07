/*=========================================================================================
Write a do-while loop that asks the user to enter two numbers.
The numbers should be added and the sum displayed.
The loop should ask the user whether he or she wishes to perform the operation again.
If so, the loop should repeat; otherwise it should terminate.
=========================================================================================*/

#include <iostream>
using namespace std;

int main() {
    int number1, number2, sum;
    char choice;

    do {
        cout << "Enter the first number: ";
        cin >> number1;

        cout << "Enter the second number: ";
        cin >> number2;

        sum = number1 + number2;
        cout << "The sum of " << number1 << " and " << number2 << " is: " << sum;

        cout << "Do you wish to perform another operation (y/n)? : ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Operation terminated." << endl;
    return 0;
}
