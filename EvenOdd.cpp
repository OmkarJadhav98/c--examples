#include <iostream>

using namespace std;

int main() 
{
    int No = 0;

    cout << "Please enter a Number : \n";
    cin >> No;

    if(No % 2 == 0) 
    {
        cout << "This number is Even Number...\n";
    } else 
    {
        cout << "This number is Odd Number...\n";
    }

    return 0;
}
