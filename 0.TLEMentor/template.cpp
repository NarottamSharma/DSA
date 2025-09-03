#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9+7;
const int INF = LLONG_MAX >>1;

signed main(){
  fastio;
  int n; cin>>n;
  vector<int> v;
  
  if(n >= 1) v.push_back(0);
  if(n >= 2) v.push_back(1);
  
  for(int i = 2; i < n; i++){
    int third_value = v[i-1] + v[i-2];
    v.push_back(third_value);
  }
  
  // Output the Fibonacci sequence
  for(int j = 0; j < n; j++){
    cout << v[j] << " ";
  }
  cout << endl;

}