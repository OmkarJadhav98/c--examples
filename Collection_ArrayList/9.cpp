/*================================================================
Write a program to copy one array list into another.
================================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::copy

int main() {
    std::vector<std::string> ColorsList1 = {"1", "2", "3", "4", "5"};
    std::vector<std::string> ColorsList2 = {"Red", "Green", "Yellow", "Blue", "Black"};

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

    // Copy ColorsList2 into ColorsList1
    std::copy(ColorsList2.begin(), ColorsList2.end(), ColorsList1.begin());

    std::cout << "\nCopy ColorsList1 to ColorsList2,\nAfter copy:" << std::endl;
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

    return 0;
}
