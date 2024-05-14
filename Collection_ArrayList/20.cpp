/*************************************************************
Write a program to increase an array list size.
*************************************************************/

/***************************************************************************************************************************
In C++, we don’t need to manually increase the size of a std::vector because it automatically resizes as you add elements. 
However, if you want to reserve space to optimize reallocations, you can use the reserve method.
***************************************************************************************************************************/

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Colors;
    Colors.push_back("Red");
    Colors.push_back("Green");

    std::cout << "Original Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Reserve space for at least 5 elements
    Colors.reserve(5);
    Colors.push_back("Yellow");
    Colors.push_back("Blue");
    Colors.push_back("Black");

    std::cout << "New Vector: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
