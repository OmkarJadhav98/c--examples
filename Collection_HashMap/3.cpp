/*Write a program to check whether a map contains key-value mappings (empty) or not.*/

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

    // Check if the map is empty
    bool result = hash_map.empty();

    // Output the result
    std::cout << "Is hash map empty: " << std::boolalpha << result << std::endl;

    // Remove all elements from the map
    hash_map.clear();

    // Check again if the map is empty
    result = hash_map.empty();

    // Output the result
    std::cout << "Is hash map empty: " << std::boolalpha << result << std::endl;

    return 0;
}
