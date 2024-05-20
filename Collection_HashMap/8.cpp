/*Write a program to get the value of a specified key in a map.*/

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

    // Get the value of key 3
    auto it = hash_map.find(3);
    if (it != hash_map.end()) {
        // Key exists
        cout << "Value for key 3 is: " << it->second << endl;
    } else {
        // Key does not exist
        cout << "Key 3 does not exist." << endl;
    }

    return 0;
}
