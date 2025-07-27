#include<bits/stdc++.h>
using namespace std;

// Function to check if an array is sorted in non-decreasing order
bool sorted(int arr[], int n) {
    // Base case: If array has 0 or 1 element, it's trivially sorted
    if(n == 1 || n == 0){
        return true;
    }

    // Recursive step:
    // - Check if the last element is greater than or equal to the second last
    // - And recursively check the remaining array
    return arr[n - 1] >= arr[n - 2] && sorted(arr, n - 1);
}


int main(){
    int n =5;
    int arr[5] = {1,8,3,4,5};
    cout<<sorted(arr,n);
    return 0;
}
