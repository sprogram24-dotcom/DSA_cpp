#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pre=i-1;
        while(pre>=0 && arr[pre]>curr){
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=curr;
    }
}

void revInsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(arr[prev]>curr && prev>=0){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

// descending order
void desInsertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(arr[prev]<curr && prev>=0){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    // revInsertionSort(arr,5);
    desInsertion(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}