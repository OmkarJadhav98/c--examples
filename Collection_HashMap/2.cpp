/*Write a program to count the number of key-value (size) mappings in a map.*/

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

    // Output the size of the hash map
    std::cout << "Size of the hash map: " << hash_map.size() << std::endl;

    return 0;
}
