/*==================================================
Write a program to join two array lists.
==================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> ColorsList1 = {"Red", "Green", "Yellow", "Blue", "Black"};
    std::vector<std::string> ColorsList2 = {"White", "Orange", "Violet", "Purple"};

    // Join the two vectors
    ColorsList1.insert(ColorsList1.end(), ColorsList2.begin(), ColorsList2.end());

    std::cout << "New vector: ";
    for (const auto& color : ColorsList1) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
