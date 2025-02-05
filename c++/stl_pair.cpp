#include <bits/stdc++.h>
using namespace std;
 int main(){

    pair<int,char>p1 = {1,'a'};
    cout<<p1.first<<" "<<p1.second<<endl;

   pair<int,int>p2={2,5};
   cout<<p1.first<<" "<<p2.second<<endl;

   // store 3 or more element 

   pair<int,pair<int,int>>p3 = {3,{4,6}};
   cout<<p3.second.first<<" "<<p3.second.second<<endl;

   // Creating an array of pair
   pair<int,int>arr[]={{3,4},{5,2},{5,8},{8,1}};
   cout<<arr[3].first<<endl;

  return 0;

 }