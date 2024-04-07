#include <iostream>

using namespace std;

int main() 
{
    int a = 0; 
    int b = 0;

    cout << "Please enter a First number:\n";
    cin >> a;
    
    cout << "Please enter a Second number:\n";
    cin >> b;

    if(a == b) 
    {
        cout << "Value of 'a' is exact equals to 'b'.\n";
    } else 
    {
        cout << "Value of 'a' is not exact equals to 'b'.\n";
    }

    return 0;
}
