/*===================================================================================================
Write a program to create an array list, add some colors (strings) and print out the collection.
=====================================================================================================*/

#include <iostream>
#include <vector> // Include the vector library for ArrayList functionality

using namespace std;

int main() {
    vector<string> Colors; // Declare a vector of strings (equivalent to ArrayList)

    // Add colors to the vector
    Colors.push_back("Red");
    Colors.push_back("Green");
    Colors.push_back("Yellow");
    Colors.push_back("Blue");

    // Print the vector elements
    cout << "Vector of Colors is: ";
    for (const auto& color : Colors) {
        cout << color << " ";
    }

    return 0;
}
