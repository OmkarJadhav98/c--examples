#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    
    int i = 2;
    do
    {
        if (num % i == 0)
        {
            return false;
        }
        i++;
    }while (i <= sqrt(num));
    return true;
}

int main()
{
    int number = 0;
    
    cout << "Enter a number to check if it's prime: \n";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number.\n";
    }
    else
    {
        cout << number << " is not a prime number.\n";
    }
    return 0;
}


