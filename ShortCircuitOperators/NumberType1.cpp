#include <iostream>

using namespace std;

int main() 
{
    int No = 0;

    cout << "Please enter a Number : \n";
    cin >> No;

    if((No % 2 == 0) && (No > 100)) 
    {
        cout << "This number is Golden number...\n";
    } 
    else if((No % 2 == 0) && (No <= 100)) 
    {
        cout << "This number is Silver number...\n";
    } 
    else if((No % 2 != 0) && (No > 100)) 
    {
        cout << "This number is Platinum number...\n";
    } 
    else if((No % 2 != 0) && (No <= 100)) 
    {
        cout << "This number is Titanium number...\n";
    }
    
    return 0;
}
