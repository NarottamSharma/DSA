#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[] = {'a','b','c','\0'};
    cout<<"string Length "<<strlen(str)<<endl;
    char str1[199];
    cin.getline(str1,100);
    cout<<str1<<endl;

    string s = "Narottam"; // dynamic in Nature => runtime resize
    cout<<s<<endl;
    string s1 = "Narottam";
    string s2 = "Sharma";
    string s3 = s1+s2;
    cout<<s3<<endl;
    cout << (s1==s2 ? 1:0) << endl;

    string s4;
    getline(cin,s4);
    cout<<s4<<endl;
    for(int i=0;i<s4.length();i++){
        cout<<s4[i]<<" ";
    };
    cout<<endl;

    for(auto ch:s4){
        cout<<ch<<" ";
    }

    // Reverse a Sting 

    

    return 0;
}