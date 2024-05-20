/*Write a program to get a shallow copy of a HashMap instance.*/

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map where keys are integers and values are strings
    std::unordered_map<int, std::string> hash_map;

    // Insert key-value pairs into the map
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Print the original map
    std::cout << "The Original map: ";
    for (const auto &pair : hash_map) {
        std::cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    std::cout << std::endl;

    // Create a shallow copy of the map
    std::unordered_map<int, std::string> new_hash_map = hash_map;

    // Print the cloned map
    std::cout << "Cloned map: ";
    for (const auto &pair : new_hash_map) {
        std::cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    std::cout << std::endl;

    return 0;
}
