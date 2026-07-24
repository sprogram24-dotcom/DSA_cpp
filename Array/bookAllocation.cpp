#include <iostream>
using namespace std;

bool isvalid(int arr[],int n,int m, int maxAll){
    int stu=1;
    int pg=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAll) return false;
    }
    for(int i=0;i<n;i++){
        if(pg+arr[i]<=maxAll){
            pg+=arr[i];
        }else{
            stu++;
            pg=arr[i];
        }
    }
    if(stu>m){
        return false;
    }else{
        return true;
    }

}

int bookAllocation(int arr[],int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0; int end=sum;
    int ans;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={2,1,3,4};
    cout<<bookAllocation(arr,4,2);
    return 0;
}