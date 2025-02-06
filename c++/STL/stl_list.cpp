#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>list_1;
    list_1.push_back(5);
    list_1.emplace_back(4);
    list_1.push_front(5);
    list_1.emplace_front(56);

    //cout<<list_1[0]; //This will give error, no indexing possible

    // Adding element at the start or inserting anywhere is 
    // much cheaper  in list compared to vector

    list_1.pop_back(); //{56,5,5} // 56,5,5,4,
    list_1.pop_front(); // {5,5}

    cout<<list_1.back()<<endl; // 5
    cout<<list_1.front()<<endl; // 5
    
    // begin,end,rbegin,rend
    //back, erase,insert,pop_back,size,swap
    //clear, empty

    return 0;
    
    }