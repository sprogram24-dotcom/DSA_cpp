#include <iostream>
#include <climits>
using namespace std;

int max(int arr[],int size){
    int max=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[],int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int index(int arr[],int size, int t){
    for(int i=0; i<size; i++){
        if(t==arr[i]){
            return i;
        }
    }
    return -1;
}

void swapMinMax(int arr[],int size){
    int m=max(arr,size);
    int n=min(arr,size);
    int i1= index(arr,size,m);
    int i2= index(arr,size,n);
    swap(arr[i1],arr[i2]);
}

int main(){
    int arr[] ={5,11,22,1,-15,24};
    swapMinMax(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}