#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare a pair named p1 of type (int, char) and initialize it.
    pair<int, char> p1 = {1, 'a'};
    // Print the first and second elements of p1.
    cout << p1.first << " " << p1.second << endl; // Output: 1 a

    // Declare a pair named p2 of type (int, int) and initialize it.
    pair<int, int> p2 = {2, 5};
    // Print the first element of p1 and the second element of p2.  This demonstrates accessing elements.
    cout << p1.first << " " << p2.second << endl; // Output: 1 5

    // Declare a pair named p3 where the second element is itself another pair (int, int).
    // This allows you to effectively store three values together.
    pair<int, pair<int, int>> p3 = {3, {4, 6}};
    // Access and print the elements of the inner pair within p3.
    cout << p3.second.first << " " << p3.second.second << endl; // Output: 4 6

    // Creating an array of pairs.  Each element of the array is a pair of integers.
    pair<int, int> arr[] = {{3, 4}, {5, 2}, {5, 8}, {8, 1}};
    // Access and print the first element of the fourth pair in the array (index 3).
    cout << arr[3].first << endl; // Output: 8

    return 0;
}