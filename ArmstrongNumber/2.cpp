#include <iostream>
#include <cmath>

using namespace std;

bool Armstrong(int No) 
{
    int originalNumber = No;
    int remainder = 0;
    int result = 0;
    int iNo = 0;

    for (;originalNumber != 0;originalNumber /= 10) 
    {
        ++iNo;
    }

    originalNumber = No;

    for(;originalNumber != 0;originalNumber /= 10) 
    {
        remainder = originalNumber % 10;

        int cube = 1;
        int count = iNo; 

        for(;count > 0 ; --count) 
        {
            cube *= remainder;
        }

        result += cube;
        
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
