/*============================================================================================
Write a program to retrieve an element (at a specified index) from a given array list.
============================================================================================*/

#include <iostream>
#include <vector>

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

    // Retrieve the first, second, and fifth element
    std::cout << "First Element: " << Colors[0] << std::endl;
    std::cout << "Second Element: " << Colors[1] << std::endl;
    std::cout << "Fifth Element: " << Colors[4] << std::endl;

    return 0;
}
