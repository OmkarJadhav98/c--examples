/*====================================================================
Write a program to test whether an array list is empty or not.
====================================================================*/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};

    std::cout << "Original Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;
    std::cout << "Checking the above vector is empty or not! " << (Colors.empty() ? "Yes" : "No") << std::endl;

    // Empty the vector
    Colors.clear();
    std::cout << "\nVector after remove all elements: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;
    std::cout << "Checking the above vector is empty or not! " << (Colors.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
