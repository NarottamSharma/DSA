#include<bits/stdc++.h>
using namespace std;

void printNum(int i , int n){
    if(i == n) return ;
    cout<<i<<endl;
    i++;
    printNum(i,n);

    }
// backtracing
void backtracingPrint(int i){
    if(i==0){
        return ;
    }
    backtracingPrint(i-1);
    cout<<i<<endl;

}

void printSum(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    printSum(i-1,sum+i);
}


int main(){
    //printNum(1,10);
    backtracingPrint(5);
    //printSum(5,0);
}