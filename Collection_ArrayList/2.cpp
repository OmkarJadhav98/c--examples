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

    // Iterate through the vector and print each element
    for (const std::string& color : Colors) {
        std::cout << color << std::endl;
    }

    return 0;
}
