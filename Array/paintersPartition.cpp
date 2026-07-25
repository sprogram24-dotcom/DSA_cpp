#include <iostream>
using namespace std;

bool isValid(int arr[],int n, int m, int maxTime){
    // // for(int i=0;i<n;i++){
    // //     if(arr[i]>maxTime) return false;
    // }
    // it is not needed because we already set our "start" at max value of array
    int painter=1;
    int time=0;
    for(int i=0;i<n;i++){
        if(arr[i]+time<=maxTime){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    if(painter>m){
        return false;
    }else{
        return true;
    }
}

int painterPartition(int arr[], int n, int m){
    int sum=0;
    int start=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        start=max(start,arr[i]);
    }
    
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={40,30,10,20};
    cout<<painterPartition(arr,4,2);
    return 0;
}