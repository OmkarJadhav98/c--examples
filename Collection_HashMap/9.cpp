/*Write a program to get a set view of the keys contained in this map.*/

#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
    // Create an unordered_map
    unordered_map<int, string> hash_map;
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Create a set to store the keys
    set<int> keyset;

    // Insert the keys into the set
    for (const auto& pair : hash_map) {
        keyset.insert(pair.first);
    }

    // Display the keys
    cout << "Key set values are: ";
    for (const int& key : keyset) {
        cout << key << " ";
    }
    cout << endl;

    return 0;
}
