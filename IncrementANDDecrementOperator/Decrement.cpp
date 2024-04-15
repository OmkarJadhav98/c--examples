#include <iostream>
using namespace std;

// Function to print numbers from the given range to 1

void decrementOperatorPrints(int range) 
{
    cout << "------------- Decrement operator output ---------------\n";
    
    while (range >= 1)              // Loop until range is greater than or equal to 1 
    {
        cout << range << "\n";      // Print the value of range
        range--;                    // Decrement range by 1
    }
    cout << "------------- Decrement operator output ends here ---------------\n";
}

int main() 
{
    cout << "Please enter the range: \n";
    
    int range = 0;                      // Declare a variable to store the range
    
    cin >> range;                       // Read the range from the user
    
    decrementOperatorPrints(range);     // Call the function with the given range

    return 0;
}
