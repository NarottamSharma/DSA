#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int knapsack(int W, int val[], int wt[], int n, vector<vector<int>>& t) {
    if (n == 0 || W == 0) {
        return 0;
    }
    if (t[n][W] != -1) {
        return t[n][W];
    }
    if (wt[n-1] <= W) {
        t[n][W] = std::max(val[n-1] + knapsack(W - wt[n-1], val, wt, n-1, t), 
                           knapsack(W, val, wt, n-1, t));
    } else {
        t[n][W] = knapsack(W, val, wt, n-1, t);
    }
    return t[n][W];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = 3;
    // Initialize memoization table with -1
    vector<vector<int>> t(n + 1, vector<int>(W + 1, -1));
    cout << "Maximum value: " << knapsack(W, val, wt, n, t) << endl;
    return 0;
}