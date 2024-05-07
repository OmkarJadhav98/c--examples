/*=======================================================================
Write a program that prompts the user to input a positive integer.
It should then print the multiplication table of that number.
=======================================================================*/

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":";
    for (int i = 1; i <= 10; i++) 
    {
        cout << num << " * " << i << " = " << (num * i);
    }
    return 0;
}
