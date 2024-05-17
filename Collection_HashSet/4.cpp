/**********************************************
Write a program to empty a hash set.
**********************************************/

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

    return 0;
}


