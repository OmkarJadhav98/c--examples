/*==============================================================
Write a program to extract a portion of an array list.
==============================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "ArrayList is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Extract a portion of the vector from index 1 to 3
    std::vector<std::string> subListColors(Colors.begin() + 1, Colors.begin() + 4);

    std::cout << "Extracted portion of the ArrayList: ";
    for (const auto& color : subListColors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
