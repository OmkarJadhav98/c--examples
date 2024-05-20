/*Write a program to create a set view of the mappings contained in a map.*/

#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    // Create a map
    map<int, string> hash_map;
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Create a set view of the map
    set<pair<int, string>> set_view;
    for (const auto& entry : hash_map) {
        set_view.insert(entry);
    }

    // Display the set values
    cout << "Set values: ";
    for (const auto& entry : set_view) {
        cout << "{" << entry.first << ": " << entry.second << "} ";
    }
    cout << endl;

    return 0;
}
