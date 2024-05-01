/*===================================================================
Write a program to create simple calculator using switch Statement.
=====================================================================*/
#include <iostream>
using namespace std;

int main()
{
    double number1, number2, result;
    char character = 0;

    cout << "Choose an character: +, -, *, or /: \n";
    cin >> character;

    cout << "Enter first number:\n";
    cin >> number1;

    cout << "Enter second number:\n";
    cin >> number2;

    switch (character)
    {
        case '+':
            result = number1 + number2;
            cout << number1 << " + " << number2 << " = " << result << "\n"; 
            break;
        case '-':
            result = number1 - number2;
            cout << number1 << " - " << number2 << " = " << result << "\n";
            break;
        case '*':
            result = number1 * number2;
            cout << number1 << " * " << number2 << " = " << result << "\n";
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << number1 << " / " << number2 << " = " << result << "\n";
            } 
            else
            {
                cout << "Division by zero is not possible.\n";
            }
            break;
        default:
            cout << "Invalid character! Please choose +, -, *, or /.\n";
            break;
    }
    return 0;
}


