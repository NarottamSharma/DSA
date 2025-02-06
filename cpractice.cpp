#include <bits/stdc++.h>
using namespace std;


int addition(int x, int y){

    int c;
    c = x + y;
    return c;
}

int increment(int &a){
    a = a + 1;
    cout << "Inside Function: "<< a << endl;
    return a;

    // for pass as refernce we should send with address
}


int arrIncrement(int arr[]){
    arr[0] = arr[0] + 1;
    cout << "Inside Function: "<< arr[0] << endl;
    return arr[0];
    // generally array by default follow pass by refernce
}



int main(){

    int arr[5];
    arr[0]=1 ; 
    arrIncrement(arr);
    cout << "Inside Main : "<< arr[0] << endl;

    // generally array by default follow pass by refernce

    int a=5 , b=2;
    int c = a/b;
    cout << c ;

    return 0;
}