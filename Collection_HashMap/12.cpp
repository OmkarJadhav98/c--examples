/*Write a program to remove all mappings from a map.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Create an unordered_map
    unordered_map<int, string> hash_map;
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Print the original map
    cout << "The Original map: ";
    for (const auto& pair : hash_map) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Remove all elements from the map
    hash_map.clear();

    // Print the new map
    cout << "The New map: ";
    if (hash_map.empty()) {
        cout << "empty";
    } else {
        for (const auto& pair : hash_map) {
            cout << "{" << pair.first << ": " << pair.second << "} ";
        }
    }
    cout << endl;

    return 0;
}
