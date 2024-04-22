#include <iostream>
#include <cmath>

using namespace std;

bool Armstrong(int No) 
{
    int originalNumber = No;
    int remainder = 0;
    int result = 0;
    int iNo = 0;

    do 
    {
        originalNumber /= 10;
        ++iNo;
    }while (originalNumber != 0);

    originalNumber = No;

    do 
    {
        remainder = originalNumber % 10;

        int cube = 1;
        int count = iNo; 

        do 
        {
            cube *= remainder;
            --count;
        }while (count > 0);

        result += cube;
        originalNumber /= 10;

    }while (originalNumber != 0);

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
