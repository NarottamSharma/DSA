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

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

void reverseArray(int arr[],int sz){
    int start =0;
    int end = sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){

    /*int arr[5];
    arr[0]=1 ; 
    arrIncrement(arr);
    cout << "Inside Main : "<< arr[0] << endl;*/
    int arr1[] = {125,45,3,4,6,43,3,6};
    int sz = sizeof(arr1) / sizeof(arr1[0]) ;
    cout<<linearSearch(arr1,sz,8)<<endl;
    reverseArray(arr1,sz);
    for(int i=0;i<sz;i++){
        cout<<arr1[i]<<" ";
    }

    // generally array by default follow pass by refernce

    return 0;
}