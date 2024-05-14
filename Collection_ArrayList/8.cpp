/*==================================================
Write a program to sort a given array list.
==================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm library for sort function

int main() {
    std::vector<std::string> Colors; // Create a vector to store strings
    Colors.push_back("Red");
    Colors.push_back("Green");
    Colors.push_back("Yellow");
    Colors.push_back("Blue");
    Colors.push_back("Black");

    std::cout << "List Before Sort: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Sort the vector
    std::sort(Colors.begin(), Colors.end());

    std::cout << "List After Sort: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
