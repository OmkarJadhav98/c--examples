/*============================================================
Write a program to reverse elements in an array list.
============================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "List Before Reverse: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Reverse the vector
    std::reverse(Colors.begin(), Colors.end());

    std::cout << "List After Reverse: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
