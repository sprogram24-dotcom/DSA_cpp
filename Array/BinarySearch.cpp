#include <iostream>
using namespace std;

// using for loop
int binSearch(int arr[],int s,int target){
    int start=0;
    int end=s-1;
    while(start<=end){
        // int mid=(start+end)/2; 
        int mid=start- (end-start)/2; //optimized approch to avoid overflow
        if(target>arr[mid]){
            start=mid+1;
        }else if(target<=arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

//with recursion
int BinSearch(int arr[], int target, int start, int end){
    if(start<=end){
        int mid=start+ (end-start)/2;
        if (target>arr[mid]){
            return BinSearch(arr,target,mid+1,end);
        }else if(target<arr[mid]){
            return BinSearch(arr, target, start, mid-1);
        }else{
            return mid;
        }
    }
    
    
}
//rivision
int recBinSrch(int arr[],int t, int start, int end){
    if(start<=end){
        int mid=start+(end-start)/2;
        if (t>arr[mid]){
            return recBinSrch(arr,t,mid+1,end);
        }else if(t<arr[mid]){
            return recBinSrch(arr,t,start, mid-1);
        }else{
            return mid;
        }
    }
}

int main(){
    int arr[]={-1,0,3,4,5,9,12};
    int arr1[]={-1,0,3,5,9,12};
    int x=recBinSrch(arr1,9,0,6);
    cout<<x;
    return 0;
}

