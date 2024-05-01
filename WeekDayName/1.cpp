/* Write a program to read a weekday number and print weekday name using switch statement. */

#include <iostream>

using namespace std;

int main()
{
    int WeekdayNumber = 0;

    cout << "Enter a Weekday number (1-7): \n";
    cin >> WeekdayNumber ;

    switch(WeekdayNumber)
    {
        case 1:
        cout << "Monday";
            break;
        case 2:
        cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
        cout << "Invalid weekday number. Please enter a number between 1 and 7.";
    }
    return 0;
}

