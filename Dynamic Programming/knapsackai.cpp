#include <iostream>
#include <vector>
#include <algorithm> // For std::max
using std::cout;
using std::endl;
using std::vector;

// 1. Recursive
int knapSackRecursive(int w, int wt[], int val[], int n) {
    if (n == 0 || w == 0)
        return 0;
    if (wt[n - 1] <= w) {
        return std::max(val[n - 1] + knapSackRecursive(w - wt[n - 1], wt, val, n - 1),
                        knapSackRecursive(w, wt, val, n - 1));
    } else {
        return knapSackRecursive(w, wt, val, n - 1);
    }
}

// 2. Memoized (Top-Down)
int knapSackMemo(int w, int wt[], int val[], int n, vector<vector<int>>& t) {
    if (n == 0 || w == 0)
        return 0;
    if (t[n][w] != -1)
        return t[n][w];
    if (wt[n - 1] <= w) {
        return t[n][w] = std::max(val[n - 1] + knapSackMemo(w - wt[n - 1], wt, val, n - 1, t),
                                  knapSackMemo(w, wt, val, n - 1, t));
    } else {
        return t[n][w] = knapSackMemo(w, wt, val, n - 1, t);
    }
}

int knapSackMemo(int w, int wt[], int val[], int n) {
    if (w < 0 || n < 0) return 0; // Input validation
    vector<vector<int>> t(n + 1, vector<int>(w + 1, -1));
    return knapSackMemo(w, wt, val, n, t);
}

// 3. Bottom-Up DP
int knapSackDP(int w, int wt[], int val[], int n) {
    if (w < 0 || n < 0) return 0;
    vector<vector<int>> t(n + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (wt[i - 1] <= j) {
                t[i][j] = std::max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}

// 4. Space-Optimized DP
int knapSackDPSpaceOpt(int w, int wt[], int val[], int n) {
    if (w < 0 || n < 0) return 0;
    vector<int> dp(w + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = w; j >= wt[i - 1]; j--) {
            dp[j] = std::max(dp[j], val[i - 1] + dp[j - wt[i - 1]]);
        }
    }
    return dp[w];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int w = 50;
    int n = 3;
    cout << "Recursive: " << knapSackRecursive(w, wt, val, n) << endl;
    cout << "Memoized: " << knapSackMemo(w, wt, val, n) << endl;
    cout << "Bottom-Up DP: " << knapSackDP(w, wt, val, n) << endl;
    cout << "Space-Optimized DP: " << knapSackDPSpaceOpt(w, wt, val, n) << endl;
    return 0;
}