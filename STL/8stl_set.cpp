#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    // Inserting elements (Set stores unique and sorted values)
    s.insert(3);
    s.insert(7);
    s.insert(5);
    s.insert(3); // Duplicate, won't be added
    s.insert(5); // Duplicate, won't be added
    s.insert(1); 

    // Current set: {1, 3, 5, 7}

    auto iter1 = s.find(5); // Finds 5 in set (returns iterator)
    auto iter2 = s.find(9); // 9 is not in set, so returns s.end()

    s.erase(3);  // Removes 3 -> {1, 5, 7}
    s.erase(iter1); // Removes element at iter1 (5) -> {1, 7}

    // Another set
    set<int> s1 = {2, 4, 6, 8, 10}; // {2, 4, 6, 8, 10}

    auto iter3 = s1.find(4); // Iterator to 4
    auto iter4 = s1.find(8); // Iterator to 8

    s1.erase(iter3, iter4); // Removes range [4, 8), so 4 and 6 are removed

    // Now s1 = {2, 8, 10}

    int count1 = s1.count(8); // count1 = 1 (8 is present)
    
    // Proper way to check if 5 exists in s1
    int count2 = (s1.find(5) != s1.end()) ? 1 : 0; // count2 = 0 (5 not found)

    // Printing final sets
    cout << "s: ";
    for (int num : s) cout << num << " "; // Output: 1 7
    cout << endl;

    cout << "s1: ";
    for (int num : s1) cout << num << " "; // Output: 2 8 10
    cout << endl;

    cout << "count1 (8 in s1): " << count1 << endl; // Output: 1
    cout << "count2 (5 in s1): " << count2 << endl; // Output: 0

    return 0;

    // Time complexity log(N) for inserting and erasing
    // Function : size ,  empty, swap, begin, end, back are similar to vector
    
}
