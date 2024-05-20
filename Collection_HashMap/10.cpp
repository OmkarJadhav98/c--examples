/*Write a program to get a collection view of the values contained in this map.*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    // Create an unordered_map
    unordered_map<int, string> hash_map;
    hash_map[1] = "Red";
    hash_map[2] = "Green";
    hash_map[3] = "Black";
    hash_map[4] = "White";
    hash_map[5] = "Blue";

    // Create a vector to store the values
    vector<string> values;

    // Copy the values from the map to the vector
    for (const auto& pair : hash_map) {
        values.push_back(pair.second);
    }

    // Display the collection view of the values
    cout << "Collection view is: ";
    for (const string& value : values) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
