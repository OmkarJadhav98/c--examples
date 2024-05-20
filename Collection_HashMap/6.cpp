/*Write a program to test if a map contains a mapping for the specified value.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> hash_map;
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Print the map
    cout << "The Original map: ";
    for (const auto& pair : hash_map) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Check if value 'Green' exists
    cout << "1. Does the map contain value 'Green'?" << endl;
    if (hash_map.count(2)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }

    // Check if value 'orange' exists
    cout << "\n2. Does the map contain value 'orange'?" << endl;
    if (hash_map.count(6)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }

    return 0;
}




