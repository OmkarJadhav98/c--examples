/*==================================================================================
Write a program to Menu driven program using switch statement.
( Find addition, subtraction, multiplication and division of to integer numbers )
===================================================================================*/

#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    char operation;
    int result;

    cout << "Simple Calculator \n";
    cout << "Choose an operation: \n";
    cout << "+ for Addition \n";
    cout << "- for Subtraction \n";
    cout << "* for Multiplication \n";
    cout << "/ for Division\n";

    cout << "Enter your choice: \n";
    cin >> operation;

    cout << "Enter the first integer number: ";
    cin >> number1;

    cout << "Enter the second integer number: ";
    cin >> number2;

    switch (operation) 
    {
        case '+':
            result = number1 + number2;
            cout << "The result of addition of " << number1 << " + " << number2 << " is : " << result;
            break;
        case '-':
            result = number1 - number2;
            cout << "The result of addition of " << number1 << " - " << number2 << " is : " << result;
            break;
        case '*':
            result = number1 * number2;
            cout << "The result of addition of " << number1 << " * " << number2 << " is : " << result;
            break;
        case '/':
            if (number2 != 0) 
            {
                result = number1 / number2;
                cout << "The result of addition of " << number1 << " / " << number2 << " is : " << result;
            } else 
            {
                cout << "Division by zero is not possible. ";
            }
            break;
        default:
            cout << "Invalid operation! Please choose +, -, *, or /.";
            break;
    }
    return 0;
}
