#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Sorts an array using the insertion sort algorithm
 * 
 * This function implements the insertion sort algorithm, which builds the final
 * sorted array one item at a time. It works by iterating through the array and
 * for each element, finding its correct position in the already sorted portion
 * and inserting it there by shifting other elements as needed.
 * 
 * Time Complexity: O(n²) in worst case, O(n) in best case (already sorted)
 * Space Complexity: O(1) - sorts in place
 * 
 * @param arr The integer array to be sorted (modified in place)
 * @param n The number of elements in the array
 * 
 * @note The array is sorted in ascending order
 * @note The function contains a local 'count' variable that tracks swaps but doesn't return it
 */
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