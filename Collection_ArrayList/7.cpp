/*==================================================================
Write a program to search for an element in an array list.
==================================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm library for find function

int main() {
    std::vector<std::string> Colors; // Create a vector to store strings
    Colors.push_back("Red");
    Colors.push_back("Green");
    Colors.push_back("Yellow");
    Colors.push_back("Blue");
    Colors.push_back("Black");

    std::cout << "Vector of Colors is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Search for an element in the vector
    if (std::find(Colors.begin(), Colors.end(), "Black") != Colors.end()) {
        std::cout << "Found the element..." << std::endl;
    } else {
        std::cout << "There is no such element..." << std::endl;
    }

    return 0;
}
