#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int val[], int wt[], int n) {
    // Base condition
    if (n == 0 || W == 0) {
        return 0;
    }
    // If the weight of the (n-1)th item is less than or equal to remaining capacity
    if (wt[n-1] <= W) {
        return max(val[n-1] + knapsack(W - wt[n-1], val, wt, n-1), 
                   knapsack(W, val, wt, n-1));
    }
    // If the weight of the (n-1)th item is more than remaining capacity
    else {
        return knapsack(W, val, wt, n-1);
    }
}

// Example main function to test the knapsack function
int main() {
    int val[] = {60, 100, 120}; // Values of items
    int wt[] = {10, 20, 30};    // Weights of items
    int W = 50;                  // Knapsack capacity
    int n = 3;                   // Number of items
    cout << "Maximum value: " << knapsack(W, val, wt, n) << endl;
    return 0;
}