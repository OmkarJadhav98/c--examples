/*========================================================================================================
Write a program to print Fibonacci series of n terms where n is input by user : 0 1 1 2 3 5 8 13 24 .....
==========================================================================================================*/

#include <iostream>
using namespace std;

int main() 
{
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << firstTerm << " " << secondTerm;

    for (int i = 3; i <= n; i++) 
    {
        nextTerm = firstTerm + secondTerm;
        cout << " " << nextTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
