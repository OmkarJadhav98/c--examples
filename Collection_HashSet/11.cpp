/**********************************************************************************
Write a program to compare two sets and retain elements that are the same.
**********************************************************************************/

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> h_set1 = {"Red", "Green", "Orange", "Yellow"};
    std::unordered_set<std::string> h_set2 = {"Red", "Pink", "Black", "Yellow"};

    // Retain elements that are the same
    for (const auto& element : h_set1) {
        if (h_set2.count(element)) {
            h_set2.erase(element);
        } else {
            h_set1.erase(element);
        }
    }

    std::cout << "Set after retaining common elements: ";
    for (const auto& element : h_set1) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
