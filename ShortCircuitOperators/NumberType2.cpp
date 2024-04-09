#include <iostream>

using namespace std;

int main() 
{
    int No = 0 ;

    cout << "Please enter a Number : \n";
    cin >> No;

    if((No > 100) || (No % 2 == 0)) 
    {
        cout << "----Great no----\n";
    } 
    else if((No < 100) || (No % 2 != 0)) 
    {
        cout << "----Super no----\n";
    }
    
    return 0;
}
