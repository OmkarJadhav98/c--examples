/****************************************************************
Write a program to clone a hash set to another hash set.
****************************************************************/

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> h_set;
    h_set.insert("Red");
    h_set.insert("Green");
    h_set.insert("Orange");
    h_set.insert("Yellow");

    std::cout << "Original Unordered Set: ";
    for (const auto& element : h_set) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Clone the set
    std::unordered_set<std::string> new_h_set = h_set;

    std::cout << "Cloned Unordered Set: ";
    for (const auto& element : new_h_set) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
