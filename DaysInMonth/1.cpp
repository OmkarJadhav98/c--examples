/*=================================================================================
Write a program to Find the number of days in a month using a switch statement.
=================================================================================*/
#include <iostream>
using namespace std;

int main()
{
    int MonthNumber = 0;
    int NumberOfDays = 0;
    const char *MonthName = nullptr;

    cout << "Enter the Month number (1-12): \n";
    cin >> MonthNumber;

    int year = 0;
    cout << "Enter a year: \n";
    cin >> year;

    switch (MonthNumber) 
    {
        case 1:
            MonthName = "January";
            NumberOfDays = 31;
            break;
        case 2:
            MonthName = "February";
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                NumberOfDays = 29;
            } else {
                NumberOfDays = 28;
            }
            break;
        case 3:
            MonthName = "March";
            NumberOfDays = 31;
            break;
        case 4:
            MonthName = "April";
            NumberOfDays = 30;
            break;
        case 5:
            MonthName = "May";
            NumberOfDays = 31;
            break;
        case 6:
            MonthName = "June";
            NumberOfDays = 30;
            break;
        case 7:
            MonthName = "July";
            NumberOfDays = 31;
            break;
        case 8:
            MonthName = "August";
            NumberOfDays = 31;
            break;
        case 9:
            MonthName = "September";
            NumberOfDays = 30;
            break;
        case 10:
            MonthName = "October";
            NumberOfDays = 31;
            break;
        case 11:
            MonthName = "November";
            NumberOfDays = 30;
            break;
        case 12:
            MonthName = "December";
            NumberOfDays = 31;
            break;
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12.";
            break;
    }
    
    cout << "The month of "<< MonthName << " has " << NumberOfDays << " days.";
    
    return 0;
}