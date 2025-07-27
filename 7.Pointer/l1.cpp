#include<bits/stdc++.h>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;
}


int main(){
    int a = 10;
    cout<< &a<< endl;         // Prints the address of variable 'a' (& is the address-of operator)
    int* ptr = &a;            // 'ptr' is a pointer to int, storing the address of 'a'
    cout<< ptr<< endl;        // Prints the address stored in 'ptr' (should be same as &a)
    int** ptr2 = &ptr;        // 'ptr2' is a pointer to pointer to int, storing address of 'ptr'
    cout<< &ptr2<< endl;      // Prints the address of 'ptr2'
    cout<< *(&a)<< endl;      // Dereferences the address of 'a', gives value of 'a' (* is dereference operator)
    cout<< *(ptr)<< endl;     // Dereferences 'ptr', gives value of 'a'
    cout<< *(ptr2)<< endl;    // Dereferences 'ptr2', gives value of 'ptr' (address of 'a')
    cout<< **(ptr2) << endl;  // Double dereference, gives value of 'a'
    int *z;                   // Declares a pointer 'z' (uninitialized, may point anywhere)
    cout<< z<< endl;          // Prints garbage value (whatever address is in 'z')
    int* y = NULL;            // 'y' is a pointer initialized to NULL (doesn't point anywhere)
    cout<< &y<< endl;         // Prints the address of pointer variable 'y'

    // pass by referense 
    changeA(&a);
    cout<<a<<endl;//20

    // & (address-of): gives the memory address of a variable.
    // * (dereference): accesses the value at the address a pointer is pointing to.

    return 0;
}