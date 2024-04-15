#include <iostream>
using namespace std;

int main() 
{
    int no = 0;

    // Display a message to user to enter a positive value
    
    cout << "Pls enter positive no: \n";
    cin >> no;

    /* If the number is divisible by 2 with no remainder, then it is even
    Otherwise, it is odd*/

    cout << ((no % 2 == 0) ? "this number is even using ternary operator.." : "this number is odd using ternary operator..") << "\n";

    return 0;
}