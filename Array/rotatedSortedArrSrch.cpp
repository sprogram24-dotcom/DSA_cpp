#include <iostream>
using namespace std;

int binSearch(int arr[], int target,int start, int end){
    int mid=start+(end-start)/2;
    if (target>arr[mid]){
        start=mid+1;
    }else if(target<arr[mid]){
        end-mid-1;
    }else{
        return mid;
    }
}

int rotateSearch(int arr[],int s,int target){
    int start=0;
    int end=s-1;
    int mid=start+(end-start)/2;
    if(arr[start]>arr[mid]){
        int y=binSearch(arr,target,mid+1,end);
        if(target==arr[y]){
            return y;
        }else{
            for(int i=start;i<mid;i++){
                if(target==arr[i]){
                return i;
                }
            }
        }
    }else{
        int x=binSearch(arr,target,start,mid-1);
        if(target==arr[x]){
            return x;
        }else{
            for(int i=mid+1;i<=end;i++){
                if(target==arr[i]){
                return i;
                }
            } 
        }
    }     
}

int rtsrch(int arr[],int s,int target){
    int start=0;
    int end=s-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if (target==arr[mid]){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(target>=arr[start] && target<=arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(target>=arr[mid] && target<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
}


int main(){
    int arr[]={3,4,5,6,7,0,1,2};
    int arr1[]={6,7,0,1,2,3,4,5};
    cout<<rtsrch(arr1,8,0);
    return 0;
}