#include <bits/stdc++.h>
using namespace std;

int main() {
    // Multiset stores elements in sorted order and allows duplicates
    multiset<int> mset;

    // Inserting elements
    mset.insert(3);
    mset.insert(7);
    mset.insert(3);
    mset.insert(3);
    mset.insert(7);

    // Current mset: {3, 3, 3, 7, 7}

    // Removes all occurrences of 7
    mset.erase(7);  // Now mset = {3, 3, 3}

    // Removes only one occurrence of 3
    mset.erase(mset.find(3)); // Now mset = {3, 3}

    // Count occurrences of 3
    int count = mset.count(3); // count = 2

    // Print final multiset
    for (auto num : mset) cout << num << " ";  // Output: 3 3
    cout << endl;

    cout << "Count of 3: " << count << endl;  // Output: Count of 3: 2

    return 0;
}
