#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int small_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small_indx]){
                small_indx=j;
            }
        }
        swap(arr[i],arr[small_indx]);
    }
}

// descending order
void desSelection(int arr[],int n){
    for(int i=0;i<n;i++){
        int large_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[large_indx]){
                large_indx=j;
            }
        }
        swap(arr[large_indx],arr[i]);
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    // selectionSort(arr,5);
    desSelection(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}