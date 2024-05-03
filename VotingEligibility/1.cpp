/*============================================================================================
Write a program to check whether a person is eligible to vote or Not using switch statement.
=============================================================================================*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout << "Enter your age : ";
    cin >> age;
    
    // Since switch does not support range checking directly, we convert the age to cases
    int eligibilityCase = (age >= 18) ? 1 : 0;

    switch (eligibilityCase) 
    {
        case 1:
            cout << "You are eligible to vote.";
            break;
        case 0:
            cout << "You are not eligible to vote.";
            break;
        default:
            cout << "Invalid input.";
            break;
    }
    return 0;
}
