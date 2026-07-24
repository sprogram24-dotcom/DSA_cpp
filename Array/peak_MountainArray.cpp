#include <iostream>
using namespace std;

// brute force


// with binary search
int mountainPeak(int arr[],int s){
    int start=1; //starting and ending element will never be peak
    int end=s-2;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"error";
            return mid;
        }
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        if(arr[mid]<arr[mid-1]){
            end=mid-1;
        }
    }
}

int main(){
    int arr[]={0,3,8,9,5,2};
    int arr1[]={18,29,38,59,98,100,99,90};
    int arr2[]={0,1,0};
    cout<<mountainPeak(arr2,3);
    return 0;
}