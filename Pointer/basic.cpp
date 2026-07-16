#include <iostream>
using namespace std;

//pass by value, no change in the actual reference
int passByValue(int x){
    x+=10;
    return x;
}
// pass by reference: 1. using pointer, 2. using Alias(reference)
int passByRef(int* x){
    *x+=12; 
}
int usingAlias(int &b){ //&: here it is refering the variable itself
    b+=13;
}

int main(){
    // int a=23;
    // int* ptr=&a;
    // int** ptr2=&ptr;
    // int* p=NULL; //pointer storing NULL value
    // cout<<*(&a)<<endl; //*: Dereference operator
    // cout<<*ptr<<endl;
    // cout<<*(*ptr2)<<endl;
    // int** p=&ptr;
    // cout<<p<<endl;
    // cout<<&ptr<<endl;
    // cout<<&a<<endl; //&: Address of operator
    // cout<<ptr;
    int a=10;
    cout<<passByValue(a)<<endl; //pass by value
    cout<<a<<endl; //no change in the actual memory location

    int* ptr=&a;
    passByRef(ptr);//pass by reference using pointers
    cout<<a<<endl;

    usingAlias(a); //pass by reference using alias
    cout<<a<<endl;

    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl; //array pointer: store the first address of an array
    //Array pointer is also called as constant pointer
    int m=17;
    int* ptr2=&m;
    // arr=&m; //error: 

    cout<<ptr<<endl;
    ptr++; //increment by a size of int
    cout<<ptr<<endl;
    ptr--; //decrement by a size of int
    cout<<ptr<<endl;
    
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    
    //arithmetic operation:
    int g=90;
    int* ptr3=&g;
    int* ptr4=ptr3+1;
    cout<<ptr3<<endl;
    cout<<ptr4<<endl;
    cout<<ptr4-ptr3<<endl;

    if (ptr3==ptr4-1){
        cout<<"True"<<endl;
    }
    return 0;
}

