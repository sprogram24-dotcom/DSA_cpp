#include <iostream>
using namespace std;

void revArr(int arr[], int size){
    for( int i=0; i<size/2; i++){
        swap(arr[i],arr[size-1-i]);
    }
}

int main(){
    int arr[]= {4,2,7,8,1,2,5};
    revArr(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}

