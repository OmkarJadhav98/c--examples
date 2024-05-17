/*********************************************************
Write a program to convert a hash set to an array.
*********************************************************/

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

    // Convert HashSet to an array
    std::string arr[h_set.size()];
    int i = 0;
    for (const auto& element : h_set) {
        arr[i++] = element;
    }

    std::cout << "Array elements: ";
    for (const auto& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
