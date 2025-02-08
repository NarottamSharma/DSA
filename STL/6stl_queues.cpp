#include <bits/stdc++.h>
using namespace std;
 //       rempve<-  23 4 3 5 3 1  <-insert back 
int main(){
    queue<int> q;
// FIFO  First in first out

    q.push(1);
    q.push(5);
    q.push(8);
    q.push(3);
    q.emplace(4); // 1 5 8 3 4

    q.front()+=10;
    cout << q.front() << endl; // 11 5 8 3 4
    cout << q.back() << endl; // 4
    q.pop(); // 5 8 3 4
    cout << q.front() << endl; // 5

// TC push pop front back happens in 0(1) complexity

    return 0;
}
