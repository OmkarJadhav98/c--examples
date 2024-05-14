/*============================================================================
Write a program to compare two array lists.
============================================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::find

int main() {
    std::vector<std::string> ColorsList1 = {"Red", "Green", "Yellow", "Blue", "Black"};
    std::vector<std::string> ColorsList2 = {"Red", "Green", "Yellow", "Black"};

    std::cout << "ColorsList1: ";
    for (const auto& color : ColorsList1) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    std::cout << "ColorsList2: ";
    for (const auto& color : ColorsList2) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Compare the two lists
    std::cout << "Comparison result: ";
    for (const auto& color : ColorsList1) {
        std::cout << (std::find(ColorsList2.begin(), ColorsList2.end(), color) != ColorsList2.end() ? "Yes " : "No ");
    }
    std::cout << std::endl;

    return 0;
}
