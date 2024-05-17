/************************************************************
Write a program to test if a hash set is empty or not.
************************************************************/

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> h_set;
    h_set.insert("Red");
    h_set.insert("Green");
    h_set.insert("Orange");
    h_set.insert("Yellow");

    std::cout << "Unordered Set is: ";
    for (const auto& element : h_set) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if the set is empty
    if (h_set.empty()) {
        std::cout << "The set is empty." << std::endl;
    } else {
        std::cout << "The set is not empty." << std::endl;
    }

    // Remove all elements from the set
    h_set.clear();
    std::cout << "Unordered Set after removing all elements: ";
    for (const auto& element : h_set) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
