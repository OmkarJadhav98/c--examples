/******************************************************************
Write a program to find numbers less than 7 in a tree set.
******************************************************************/

#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(3);
    numbers.insert(5);
    numbers.insert(1);
    numbers.insert(6);
    numbers.insert(8);

    std::cout << "Set is: ";
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    std::cout << "Numbers less than 7: ";
    for (const auto& number : numbers) {
        if (number < 7) {
            std::cout << number << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
