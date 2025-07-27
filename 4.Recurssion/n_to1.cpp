#include<bits/stdc++.h>
using namespace std;

void print (int i){
    if(i==0){
        return;
    }
    cout<<i<<endl;
    print(i-1);
}

void printSum(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    printSum(i-1,sum+i);
}

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int fact(int n){
    if (n<1) return 1;
    return n*fact(n-1);
}

void Swap(int i , int arr[],int n){
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    Swap(i+1,arr,n);

}

bool palindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome(i+1,s);

}

int fibb(int n){
    if(n<=1) return n;
    int last = fibb(n-1);
    int slast = fibb(n-2);
    return last + slast;
}


int main(){
    //print(4);
    //cout<<sum(4);
    //cout<<fact(3)<<endl;
    int arr[]={2,54,6,4,23,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Swap(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    string s = "amadama";
    cout<< palindrome(0,s)<<endl;
    
    cout<<fibb(6);
}