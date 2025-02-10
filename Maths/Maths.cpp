#include<bits/stdc++.h>
using namespace std;


int printDigit(int n){
    while(n!=0){
        int lastDigit = n%10;
        n=n/10;
        cout<<lastDigit<<endl;
    }
    return 0 ;
}

int Count(int n){
    int count = 0;
    while(n!=0){ 
        n/=10;
        count+=1;
    }
    cout<<count<<endl;

    return 0;
}

int reversePrint(int n){
    int rev =0;
    while (n!=0){
        int last_digit = n%10;
        rev = rev*10+ last_digit;
        n = n/10;
    }

    return rev;
}


int palindrome(int n){
    int n1=n;
    if(n1 == reversePrint(n)){
        cout<< "TRUE"<< endl;
    } else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}


int factors(int n){
    vector<int> divisors;
    for(int i =1;i*i<=n;i++){
        if(n%i == 0){
            //cout<<i<<endl;
            //if(i!=n/i) cout<<n/i<<endl;
            divisors.push_back(i);
            if(i!=n/i) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    for(auto i : divisors ){
        cout<<i<<endl;
    }
    return 0;
}

int prime(int n){
    //vector<int> factor;
    int count = 0;
    for(int i =1;i*i<=n;i++){
        if(n%i == 0){
            count++;
            if(i!=n/i) count++;
        }
    }
    if(count==2){
        cout<<"Prime"<<endl;
    } else{
        cout<<"Not Prime"<<endl;
    }

    return 0;
}


int main(){
    //printDigit(34564);
    //Count(234589514);
    //reversePrint(5678);
    //palindrome(121);
    //factors(16);
    prime(101);
    return 0;
}