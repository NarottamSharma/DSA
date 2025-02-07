#include<bits/stdc++.h>
using namespace std;

// unique and sorted

int main(){
    set<int> s;

    s.insert(3);
    s.insert(7);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(1);

    auto iter1 = s.find(5);
    auto iter2 = s.find(9);

    s.erase(3);
    s.erase(iter1);
    


}