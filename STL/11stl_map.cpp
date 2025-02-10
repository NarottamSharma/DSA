#include <bits/stdc++.h>
using namespace std;

int main() {
    // Key-Value pair where keys are sorted and unique
    map<int, int> m1;
    map<int, pair<int, int>> m2;
    map<pair<int, int>, int> m3;
    map<char, string> m4;

    // Inserting values
    m1[1] = 3;           // Key = 1, Value = 3
    m1.insert({1, 5});   // This won't update (Key 1 already exists)
    m1.insert({2, 8});   // Key = 2, Value = 8
    m1.insert({3, 10});  // Key = 3, Value = 10
    m1.emplace(4, 90);   // Efficient insertion (Key = 4, Value = 90)

    // Printing key-value pairs
    cout << "Map contents:\n";
    for (auto i : m1) {
        cout << i.first << " -> " << i.second << endl;
    }

    // Accessing values using keys
    cout << "Value at key 4: " << m1[4] << endl;  // Output: 90
    cout << "Value at key 10: " << m1[10] << endl; // Key 10 does not exist, 
    // so it inserts 10->0 (default for int)

    // Finding a key in the map
    auto iter = m1.find(7);  // Returns iterator to key 7 if found, else m1.end()
    if (iter != m1.end()) {
        cout << "Found key 7: " << iter->second << endl;
    } else {
        cout << "Key 7 not found!" << endl;
    }

    auto iter1 = m1.find(15);
    if (iter1 == m1.end()) {
        cout << "Key 15 not found!" << endl;
    }


// Multimap
    multimap<int, string> mm;
    mm.insert({1, "Alice"});
    mm.insert({1, "Bob"});   // Duplicate key is allowed
    mm.insert({2, "Charlie"});

// Unordered Map
    unordered_map<int, string> um;
    um[1] = "Alice";
    um[2] = "Bob";




    return 0;
}
