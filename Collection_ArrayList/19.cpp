/*==================================================================
Write a program for trimming the capacity of an array list.
==================================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "Original Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Trim the capacity of the vector to fit its size
    std::vector<std::string>(Colors).swap(Colors);

    std::cout << "Vector after trim to size: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
