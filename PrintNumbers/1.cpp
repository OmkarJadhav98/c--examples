/*==========================================================
Write a program to print numbers from 1 to 10.
==========================================================*/

#include <iostream>
using namespace std;

int main()
{
    int upperLimit;
    
    cout << "Enter a number: \n";
    cin >> upperLimit;

    for (int i = 1; i <= upperLimit; i++)
    {
        cout << "\n" << i ;
    }
    
}
