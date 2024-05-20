/*Write a program to test if a map contains a mapping for the specified key.*/

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map where keys are strings and values are integers
    std::unordered_map<std::string, int> hash_map;

    // Insert key-value pairs into the map
    hash_map["Red"] = 1;
    hash_map["Green"] = 2;
    hash_map["Black"] = 3;
    hash_map["White"] = 4;
    hash_map["Blue"] = 5;

    // Print the original map
    std::cout << "The Original map: ";
    for (const auto &pair : hash_map) {
        std::cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    std::cout << std::endl;

    // Check if 'Green' key exists in the map
    std::cout << "1. Is key 'Green' exists?" << std::endl;
    if (hash_map.find("Green") != hash_map.end()) {
        // Key exists
        std::cout << "yes! - " << hash_map["Green"] << std::endl;
    } else {
        // Key does not exist
        std::cout << "no!" << std::endl;
    }

    // Check if 'orange' key exists in the map
    std::cout << "\n2. Is key 'orange' exists?" << std::endl;
    if (hash_map.find("orange") != hash_map.end()) {
        // Key exists
        std::cout << "yes! - " << hash_map["orange"] << std::endl;
    } else {
        // Key does not exist
        std::cout << "no!" << std::endl;
    }

    return 0;
}
