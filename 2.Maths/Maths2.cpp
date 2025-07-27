#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    // gcd(a,b)=gcd(a-b,b)==gcd(a%b,b) if a>=0
    //M 1
    while(b!=0){
        int temp =b;
        b = a%b;
        a = temp;
    }
    cout<<a<<endl;
    return a;



    /* M-2
    while(a!=0&& b!=0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }

    if (a==0) cout<<b<<endl;
    else cout<<a<<endl;


    M-3
   /* int temp =1;
    for(int i =1;i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0){
            temp =i;
        }
        // TC = O(min(a,b))
    }
    cout<<temp<<endl;*/
   // return 0;
}


int main(){
    gcd(100,50);
}