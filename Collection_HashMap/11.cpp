/*Write a program to copy all mappings from the specified map to another map.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Create two unordered_maps
    unordered_map<int, string> hash_map1;
    unordered_map<int, string> hash_map2;

    // Populate hash_map1
    hash_map1[1] = "Red";
    hash_map1[2] = "Green";
    hash_map1[3] = "Black";
    cout << "\nValues in first map: ";
    for (const auto& pair : hash_map1) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Populate hash_map2
    hash_map2[4] = "White";
    hash_map2[5] = "Blue";
    hash_map2[6] = "Orange";
    cout << "\nValues in second map: ";
    for (const auto& pair : hash_map2) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Copy all values from hash_map1 to hash_map2
    hash_map2.insert(hash_map1.begin(), hash_map1.end());
    cout << "\nNow values in second map: ";
    for (const auto& pair : hash_map2) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    return 0;
}
