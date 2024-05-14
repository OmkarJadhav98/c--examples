/*========================================================================
Write a program to update an array element by the given element.
========================================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors; // Create a vector to store strings
    Colors.push_back("Red");
    Colors.push_back("Green");
    Colors.push_back("Yellow");
    Colors.push_back("Blue");
    Colors.push_back("Black");

    std::cout << "Original Vector of Colors is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Update the third element with "Orange"
    Colors[2] = "Orange";

    std::cout << "Updated Vector of Colors is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
