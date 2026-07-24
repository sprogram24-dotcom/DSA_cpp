#include <iostream>
using namespace std;

int singleElememnt(int arr[],int s){
    int start=0;
    int end=s-1;
    if(s==1) return arr[0];
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid==0 && arr[mid]!=arr[mid+1]) return arr[mid];
        if(mid==end && arr[mid]!= arr[mid-1]) return arr[mid];
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2==0){ //left-right even
            if(arr[mid]==arr[mid-1]){ //left
                end=mid-1;
            }else{ //right
                start=mid+1; 
            }
        }else{ //left-right odd
            if(arr[mid]==arr[mid-1]){ //right
                start=mid+1;
            }else{ // left
                end=mid-1;
            }
        }
    }
}

int main(){
    int arr[]={1,1,2,3,3,4,4,8,8};
    int arr1[]={1,1,2,2,3,3,4,4,8};
    int arr2[]= {1};
    cout<<singleElememnt(arr2,1);
    return 0;
}