#include<bits/stdc++.h>
using namespace std;

void  printNum(int i, int n){
    if(i==n+1){
        return;
    }
    cout<<i<<endl;
    printNum(i+1,n);

}

int main(){
    printNum(1,10);
}