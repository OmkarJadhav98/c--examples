/*===================================================================
 Write a program to clone an array list to another array list.
===================================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};
    std::cout << "Original Vector is: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Clone the vector using the copy constructor
    std::vector<std::string> ClonedColors = Colors;
    std::cout << "Cloned Vector is: ";
    for (const auto& color : ClonedColors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
