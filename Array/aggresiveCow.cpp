#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int dis){
    
}

int aggrCows(int arr[],int n, int m){
    int low=1, maxval=0;
    for(int i=0;i<n;i++){
        maxval=max(maxval,arr[i]);
    }
    int high=maxval-1;
    int ans=-1;
    while(low<=high){
        int mid=low-(high-low)/2;
        if(isPossible()){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
}

int main(){
    return 0;
}