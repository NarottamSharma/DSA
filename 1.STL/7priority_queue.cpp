#include <bits/stdc++.h>
using namespace std;

// The maximum element at the top of the priority queue

int main(){
    priority_queue<int> prq;

    prq.push(1); // 1
    prq.push(5); // 5 1
    prq.push(8); // 8 5 1
    prq.push(3); // 8 5 3 1
    prq.emplace(4); // 8 5 4 3 1
    
    cout << prq.top()<<endl;
    prq.pop();
    cout << prq.top()<<endl;
    // underlying concept is not linear its tree
    // other function are swap, size, empty


    // min heap or min priority queue

    priority_queue<int , vector<int>, greater<int>> min_prq;
    min_prq.push(1); // 1
    min_prq.push(5); //  1, 5
    min_prq.push(8); // 1,5,8
    min_prq.push(3); // 1,3,5,8
    min_prq.emplace(4); // 1,3,4,5,8
    cout<< min_prq.top()<<endl; // 1
// Time complexity push, pop,  log(N). top -0(1)

    return 0;
}