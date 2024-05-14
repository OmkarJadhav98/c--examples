/*======================================================================
Write a program to remove the third element from an array list.
======================================================================*/

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

    // Remove the third element from the vector
    Colors.erase(Colors.begin() + 2);

    std::cout << "After removing third element from the vector:\n";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
