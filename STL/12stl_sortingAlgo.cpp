#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting pairs
bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first < p2.first) return true;   // Sort by first element (ascending)
    if (p1.first > p2.first) return false;
    return p1.second > p2.second;  // If first elements are equal, sort second in descending order
}

int main() {
    // Sorting an array in ascending order
    int a[] = {13, 5, 17, 9, 43, 15};
    int n = 6;  // Array size is 6 (not 7)

    sort(a, a + n);  // Sorting entire array in ascending order

    // Printing the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting a vector in ascending order
    vector<int> v = {7, 5, 10};
    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting a subarray (from index 2 to index 4)
    sort(a + 2, a + 5);

    cout << "Partially Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting in descending order
    sort(a, a + n, greater<int>());

    cout << "Descending Order Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting an array of pairs using a custom comparator
    pair<int, int> arr[] = {{8, 4}, {5, 2}, {8, 6}};
    int m = 3;
    sort(arr, arr + m, comparator);

    cout << "Sorted Pairs: ";
    for (int i = 0; i < m; i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "} ";
    }
    cout << endl;

    // Count set bits in an integer
    int i = 5;
    cout << "Set bits in " << i << ": " << __builtin_popcount(i) << endl;

    // Count set bits in a long long integer
    long long j = 88745417754549878;
    cout << "Set bits in " << j << ": " << __builtin_popcountll(j) << endl;

    // Generate all permutations of a string
    string str = "abc";
    cout << "Permutations of 'abc':" << endl;
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    // Find the maximum element in an array
    int b[] = {10, 25, 13, 7, 30};
    int o = 5;
    int max_val = *max_element(b, b + m);
    cout << "Maximum element in array: " << max_val << endl;




    return 0;
}
