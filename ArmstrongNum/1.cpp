/*====================================================================================
Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself, 
then the number is called an Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
====================================================================================*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int number, originalNumber, result, remainder = 0;

    for (number = 1; number <= 500; number++) 
    {
        originalNumber = number;
        result = 0;

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number) {
            cout << number << " is an Armstrong number.";
        }
    }
    return 0;
}
