#include<bits/stdc++.h>
using namespace std;
//LIFO last in first out
//          pop top element-> top-> 5 - 4 - 3 - 2 - 1|
int main(){
    stack<int> stk;
    stk.push(1); // 1
    stk.push(2); // 2 1
    stk.push(5); // 5 2 1
    stk.push(6); // 6 5 2 1
    stk.emplace(7); // 7 6 5 2 1

    // cannot do stk[0] gives error
    
    cout<<stk.top()<<endl; // prints 7
    cout<<stk.size()<<endl; // 5
    cout<<stk.empty()<<endl; // 0 means False

    stack<int> stk1;
    stk.swap(stk1); // swap stk and stk1

    // TC - push pop top happens in O(1) time complexity

    return 0;


}