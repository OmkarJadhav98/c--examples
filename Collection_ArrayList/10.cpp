/*============================================================
Write a program to shuffle elements in an array list.
============================================================*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::shuffle
#include <random> // For std::random_device and std::mt19937

int main() {
    std::vector<std::string> Colors = {"Red", "Green", "Yellow", "Blue", "Black"};
    std::random_device rd; // Non-deterministic random number generator
    std::mt19937 g(rd()); // Seed the generator

    std::cout << "List Before Shuffling: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    // Shuffle the vector
    std::shuffle(Colors.begin(), Colors.end(), g);

    std::cout << "List After Shuffling: ";
    for (const auto& color : Colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;

    return 0;
}
