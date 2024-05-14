/***********************************************************************************************
Write a program to print all the elements of an ArrayList using the elements' position.
***********************************************************************************************/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "Original Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << "\n\nPrint using index of an element: \n";

    for (size_t index = 0; index < Colors.size(); ++index) {
        std::cout << Colors[index] << "\n";
    }

    return 0;
}
