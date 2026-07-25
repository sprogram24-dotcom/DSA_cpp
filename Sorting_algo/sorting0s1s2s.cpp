#include <iostream>
using namespace std;

void sort0s1s2s(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap) return;
    }
}

int main(){
    int arr[]={2,1,0,1,2,0,0,2,1};
    sort0s1s2s(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}