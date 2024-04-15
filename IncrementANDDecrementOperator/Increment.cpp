#include <iostream>
using namespace std;

// Function to print numbers from 1 to the given range

void incrementOperatorPrints(int range) 
{
    cout << "------------- Increment operator output Start ---------------\n";

    int no = 1;                                 // Initialize no to 1
    while (no <= range)                         // Loop until no is less than or equal to range
    {
        cout << no << "\n";                     // Print the value of no
        no++;                                   // Increment no by 1
    }
    cout << "------------- Increment operator output ends here ---------------\n";
}

int main() 
{
    cout << "Please enter the Number: \n";

    int range = 0;                          // Declare a variable to store the range
    cin >> range;                           // Read the range from the user
    incrementOperatorPrints(range);         // Call the function with the given range

    return 0;
}
