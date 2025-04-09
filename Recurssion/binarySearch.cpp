#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target, int st, int end){
    if(st>end) return -1;

    int mid=st+(end-st)/2;
    if(target==arr[mid]) return mid;

    else if(arr[mid]>target) return binarySearch(arr,target,st,mid-1);

    else{
        return binarySearch(arr,target,mid+1,end);
    }

}

int main(){
    vector<int>arr ={1,2,3,4,9};
    int n=5;
    cout<<binarySearch(arr,9,0,arr.size()-1)<<"\n";
    return 0;
}