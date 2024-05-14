/***********************************************************************************************
Write a program to replace the second element of an ArrayList with the specified element.
***********************************************************************************************/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "Original Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Replace the second element with "White"
    Colors[1] = "White";

    std::cout << "Vector after replacing the second element with 'White': ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
