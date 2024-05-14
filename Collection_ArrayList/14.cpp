/*-------------------------------------------------------------------
Write a program that swaps two elements in an array list.
-------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "ArrayList Before Swap: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Swapping 1st(index 0) element with the 3rd(index 2) element
    std::swap(Colors[0], Colors[2]);

    std::cout << "ArrayList after swap: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
