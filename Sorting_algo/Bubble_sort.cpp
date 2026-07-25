#include <iostream>
using namespace std;

// ascending order
void bubbleSort(int arr[],int l){ //O(n^2)
    for(int i=0;i<l;i++){ //n times
        for(int j=0;j<l-i-1;j++){ //n times
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// optimization 
void optBubbleSort(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
            c++;
        }
        cout<<c<<endl;
        if(!isSwap) return;
    }
}

//descending order
void desBubble(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap) return;
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    // optBubbleSort(arr,5);
    desBubble(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}