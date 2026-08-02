#include <iostream>
using namespace std;

//brute force
void product(int arr[], int n){
    int pro=1;
    for(int i=0;i<n;i++){
        pro=pro*arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=pro/arr[i];
    }
}
// brute force with out using division operator
void pro(int arr[],int n){
    for(int i=0;i<n;i++){
        int pro=1;
        for(int j=0;j<n;i++){
            if(i!=j){
                pro*=arr[j];
            }
        }
        arr[i]=pro;
    }
}

// 

int main(){
    int arr[]={1,2,3,4};
    // pro(arr,4);
    product(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}