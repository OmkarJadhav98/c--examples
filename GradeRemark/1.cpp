/*========================================================================================
Write a program to print remark according to the grade obtained using switch statement.
========================================================================================*/

#include <iostream>
using namespace std;

int main()
{
    char grade = 0;

    cout << "Enter the grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Excellent! Keep up the good work.";
            break;
        case 'B':
            cout << "Very good! Try a little harder to reach the top.";
            break;
        case 'C':
            cout << "Good! But you can do better.";
            break;
        case 'D':
            cout << "You passed, but consider reviewing your material.";
            break;
        case 'F':
            cout << "Unfortunately, you failed. Study harder next time.";
            break;
        default:
            cout << "Invalid grade entered.";
            break;
    }
    
}
