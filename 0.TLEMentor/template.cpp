#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9+7;
const int INF = LLONG_MAX >>1;

signed main(){
  fastio;
  int t;
  cin >> t;
  
  while(t--) {
    int n;
    cin >> n;
    
    // If n is odd, impossible to have equal even and odd elements
    if(n % 2 == 1) {
      cout << -1 << endl;
      // Still need to read the array elements
      for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
      }
      continue;
    }
    
    int even_count = 0, odd_count = 0;
    
    for(int i = 0; i < n; i++) {
      int a;
      cin >> a;
      
      if(a % 2 == 0) {
        even_count++;
      } else {
        odd_count++;
      }
    }
    
    // We need n/2 even and n/2 odd elements
    int target = n / 2;
    
    // Calculate excess elements
    int excess_even = max(0LL, even_count - target);
    int excess_odd = max(0LL, odd_count - target);
    
    // Minimum operations needed is the excess of either type
    // (since each operation converts one type to another)
    cout << max(excess_even, excess_odd) << endl;
  }
  
  return 0;
}