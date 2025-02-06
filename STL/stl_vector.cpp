#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare and initialize a vector 'v' of integers.
    vector<int> v = {1, 3, 4, 3, 2};
    // Access and print the element at index 2.
    cout << v[2] << endl; // Output: 4

    // Add elements to the end of the vector.
    v.push_back(11); // Adds 11 to the end.
    v.emplace_back(45); // More efficient way to add 45 to the end.
    cout << v[5] << " " << v[6] << endl; // Output: 11 45

    // Other ways to declare and initialize vectors:

    // Create a vector 'v1' of size 5, where each element is initialized to 20.
    vector<int> v1(5, 20);
    cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << endl; // Output: 20 20 20 20

    // Create a vector 'v2' of size 5 (elements are uninitialized).
    vector<int> v2(5);

    // Create a vector 'v3' as a copy of vector 'v1'.
    vector<int> v3(v1);
    cout << v3[1] << endl; // Output: 20

    // Vector of pairs:
    vector<pair<int, int>> v4 = {{1, 2}, {3, 4}};
    v4.push_back({5, 7}); // Add a pair using push_back.
    v4.emplace_back(4, 6); // Add a pair using emplace_back (more efficient).
    cout << v4[0].first << " " << v4[3].second << endl; // Output: 1 6

    // Iterators:
    // Declare an iterator 'i' pointing to the beginning of vector 'v'.
    // v = {1, 3, 4, 3, 2}
    vector<int>::iterator i = v.begin();
    cout << *i << endl; // Output: 1 (dereference the iterator to get the value).
    cout << *(i + 1) << endl; // Output: 3  (access the next element)
    cout << *(i + 2) << endl; // Output: 4

    // Other iterators:
    // v = {1, 3, 4, 3, 2}
    vector<int>::iterator i1 = v.end(); // Points to one element *past* the end.
    vector<int>::reverse_iterator i2 = v.rend(); // Reverse end iterator.
    vector<int>::reverse_iterator i3 = v.rbegin(); // Reverse begin iterator.
    i3++; // Increment the reverse iterator.
    cout << *(i3) << endl; // Output: 3 (in reverse)

    cout << v.back() << endl; // Output: 45 (last element of v)

    // vector<int> v = {1, 3, 4, 3, 2};
    // 1. Iterator-based loop (traditional):
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
        cout << endl; // Newline after each element.
    }
    cout << endl; // Extra newline for separation.

    // 2. Iterator-based loop (using auto):
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl; // Newline at the end of the line.

    // 3. Range-based for loop (for-each loop) - using explicit type:
    for (int k : v) {
        cout << k << " ";
    }
    cout << endl; // Newline at the end of the line.

    // 4. Range-based for loop (for-each loop) - using auto:
    for (auto k : v) {
        cout << k << " ";
    }
    cout << endl; // Newline at the end of the line.

    //vector<int> v = {1, 3, 4, 3, 2};
    // Delete elements:

    // Erase the element at index 2 (which is 4).
    v.erase(v.begin() + 2);  // v now: {1, 3, 3, 2}

    // Erase the elements from index 1 up to (but NOT including) index 3.
    v.erase(v.begin() + 1, v.begin() + 3); // v now: {1, 2}

    // Insert elements:
    vector<int> v5 = {1, 4, 7, 10, 13};

    // Insert 5 at the beginning of v5.
    v5.insert(v5.begin(), 5); // v5 now: {5, 1, 4, 7, 10, 13}

    // Insert two 8s before the element at index 2.
    v5.insert(v5.begin() + 2, 2, 8); // v5 now: {5, 1, 8, 8, 4, 7, 10, 13}

    vector<int> v6 = {20, 25};

    // Insert the elements of v6 at the beginning of v5.
    v5.insert(v5.begin(), v6.begin(), v6.end()); // v5 now: {20, 25, 5, 1, 8, 8, 4, 7, 10, 13}

    cout << v5.size() << endl; // Output: 10

    // Remove the last element of v5 (13).
    v5.pop_back(); // v5 now: {20, 25, 5, 1, 8, 8, 4, 7, 10}

    // Swap the contents of v7 and v8.
    vector<int> v7 = {1, 2};
    vector<int> v8 = {3, 4};
    v7.swap(v8); // v7 now: {3, 4}, v8 now: {1, 2}

    // Clear all elements from v7.
    v7.clear(); // v7 is now empty.
    
    return 0;
}