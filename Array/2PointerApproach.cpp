#include <iostream>
using namespace std;

void revArr(int arr[], int size){
    int start= 0;
    int end= size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={4,2,3,8,7,9,2,5};
    revArr(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}