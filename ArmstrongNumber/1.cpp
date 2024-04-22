#include <iostream>
#include <cmath>

using namespace std;

bool Armstrong(int No) 
{
    int originalNumber = No;
    int remainder = 0;
    int result = 0;
    int iNo = 0;

    while (originalNumber != 0) 
    {
        originalNumber /= 10;
        ++iNo;
    }

    originalNumber = No;

    while (originalNumber != 0) 
    {
        remainder = originalNumber % 10;
        int cube = 1;
        int count = iNo; 

        while (count > 0) 
        {
            cube *= remainder;
            --count;
        }

        result += cube;
        originalNumber /= 10;
    }

    return No == result;
}


int main() 
{
    cout << "Please enter a number to check if it's an Armstrong number: \n";

    int No;
    cin >> No;

    if (Armstrong(No)) 
    {
        cout << No << " is an Armstrong number";
    } else 
    {
        cout << No << " is not an Armstrong number";
    }

    return 0;
}
