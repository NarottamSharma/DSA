#include<bits/stdc++.h>
using namespace std;
/**
 * @brief Sorts an array of integers in ascending order using the bubble sort algorithm.
 * 
 * This function implements the bubble sort algorithm, which repeatedly steps through
 * the array, compares adjacent elements and swaps them if they are in the wrong order.
 * The pass through the array is repeated until the array is sorted.
 * 
 * @param arr The array of integers to be sorted (modified in-place)
 * @param n The number of elements in the array
 * 
 * @note Time complexity: O(n²) in worst and average case, O(n) in best case
 * @note Space complexity: O(1) - sorts in-place
 * @note The array is modified directly; no new array is created
 */
void bubbleSort(int arr[],int n){
    for(int i=n-1 ;i >= 1 ;i--){
        for(int j =0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}