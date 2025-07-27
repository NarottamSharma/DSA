#include <bits/stdc++.h>
using namespace std;

// Recursive function to print all subsets of the input array
void printSubset(vector<int> &arr, vector<int> &ans, int i) {
    // Base case: if we've considered all elements
    if (i == arr.size()) {
        // Print the current subset (stored in 'ans')
        for (int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // ----------- Include current element in subset ----------- //
    ans.push_back(arr[i]);              // Choose arr[i]
    printSubset(arr, ans, i + 1);       // Recur for the next index
    ans.pop_back();                     // Backtrack: remove arr[i]

    // ----------- Exclude current element from subset ----------- //
    printSubset(arr, ans, i + 1);       // Recur without choosing arr[i]
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};   // Input array
    vector<int> ans;                    // Temporary vector to store current subset
    printSubset(arr, ans, 0);           // Start recursion from index 0
    return 0;
}
