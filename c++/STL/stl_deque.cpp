#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> deque_1;
    deque_1.push_back(5);
    deque_1.emplace_back(7);
    deque_1.push_front(3);
    deque_1.emplace_front(1);


// Adding element at the start is much cheaper compared to vector
// But inseting in between is in deque compared to list 

    deque_1.pop_back();
    deque_1.pop_front();

    cout<<deque_1.back()<< endl;
    cout<<deque_1.front()<<endl;
    cout<< deque_1[1]<<endl;

// begin,end,rbegin,rend
//back, erase,insert,pop_back,size,swap
//clear, empty


    return 0;
}
