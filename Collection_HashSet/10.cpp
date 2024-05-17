/***********************************************
Write a program to compare two hash set.
***********************************************/

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> h_set1 = {"Red", "Green", "Orange", "Yellow"};
    std::unordered_set<std::string> h_set2 = {"Red", "Pink", "Black", "Yellow"};

    for (const auto& element : h_set1) {
        std::cout << (h_set2.count(element) ? "Yes" : "No") << std::endl;
    }

    return 0;
}
