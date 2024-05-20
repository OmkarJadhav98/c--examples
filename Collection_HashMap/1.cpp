/*Write a program to associate the specified value with the specified key in a HashMap.*/

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map where keys are integers and values are strings
    std::unordered_map<int, std::string> hash_map;

    // Associate the specified value with the specified key in the map
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Iterate over the unordered_map and print the key-value pairs
    for (const auto &pair : hash_map) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}
