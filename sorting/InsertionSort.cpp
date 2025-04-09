#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n ){
    int count = 0;
    for(int i =1; i < n; i++){
        int j = i;
        while(arr[j]<arr[j-1] && j>0){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            count+=1;
        }

    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}