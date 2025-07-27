#include<bits/stdc++.h>
using namespace std;

int hashint(){
    // array can be globally 1e7 10 power 7 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
// Pre compute
    int hash[13] = {0};
    for(int i =0;i<n;i++){
        hash[arr[i]]+=1;
    }


    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }

    return 0;
}

// hash string a->97 by ascii std
void hashstring(){
    string s;
    cin>>s;

    // pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
// char -'a' , upper casse char-"A" all = 256

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
}



int main(){

    // hashint();
    cout<<"Hi Narottam";
    // hashstring();
    return 0;
}