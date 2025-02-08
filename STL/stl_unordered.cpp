#include <bits/stdc++.h>
using namespace std;

int main() {
    // Unordered set (stores unique elements in random order)
    unordered_set<int> u_set;

    // Insert elements
    u_set.insert(10);
    u_set.insert(5);
    u_set.insert(15);
    u_set.insert(10); // Duplicate, ignored
    u_set.insert(20);

    // Expected output: Random order (e.g., 5 10 15 20)

    // Find an element
    if (u_set.find(15) != u_set.end()) {
        cout << "15 is present" << endl;
    } else {
        cout << "15 is not present" << endl;
    }

    // Erase an element
    u_set.erase(10);

    // Count occurrences of 10 (always 0 or 1 since it's unique)
    cout << "Count of 10: " << u_set.count(10) << endl;

    // Print elements
    cout << "Elements in unordered_set: ";
    for (int num : u_set) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
