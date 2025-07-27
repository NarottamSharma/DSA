#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output){
    if(input.length() == 0){
        cout << output << "\n";
        return;
    }

    string op1 = output;
    string op2 = output;

    op1.push_back('_');
    op1.push_back(input[0]);  
    
    op2.push_back(input[0]);

    input.erase(input.begin());  // remove processed char

    solve(input, op1);
    solve(input, op2);
}

int main(){
    string input = "abc";
    string output = "";

    output.push_back(input[0]);       // take first character as it is
    input.erase(input.begin());       // remove first character

    solve(input, output);

    return 0;
}
/*
a_b_c
a_bc
ab_c
abc
*/