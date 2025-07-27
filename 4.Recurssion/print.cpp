#include<bits/stdc++.h>
using namespace std;

void print(int i  , int n){
    if(i == n) return;
    cout<<"Name"<<endl;
    i++;
    print(i,n);

}



int main(){
    int n;
    cin>>n;5
    print(0,n);

    return 0;
}