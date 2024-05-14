/*=======================================================================================
Write a program to insert an element into the array list at the first position.
=======================================================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors; // Create a vector to store strings
    Colors.push_back("Red");
    Colors.push_back("Green");
    Colors.push_back("Yellow");
    Colors.push_back("Blue");

    std::cout << "Old Vector is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Insert "Orange" at the first position
    Colors.insert(Colors.begin(), "Orange");

    std::cout << "New Vector is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
