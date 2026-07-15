#include <iostream>
#include <climits>
using namespace std;

int sum(int arr[],int s){
    
    int ans=0;
    for(int i=0;i<s;i++){
        int sum=0;
        for(int j=i;j<s;j++){
            sum=sum+arr[j];
            ans=max(ans,sum);
        }
    }
    return ans;
}

int sum1(int arr[],int s){
    int ans=0;
    int sum=0;
    for(int i=0;i<s;i++){
        sum= sum+arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
    return ans;
}


int mejorityElement(int arr[],int s){
    
    int freq=1;
    int ans=arr[0];
    for(int i=1;i<s;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }else{
            freq=1;
            ans=arr[i];
        }
    }
    if(freq==s/2){
        return ans;
    }
    return ans;
}

int mooreAlgo(int arr[],int s){
    int freq=0;
    int ans=0;
    for(int i=0;i<s;i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}


int main(){
    int arr1[]={3,-4,5,5,4,-1,7,-8};
    int arr[]={1,1,1,2,2,2,2};
    cout<<mooreAlgo(arr,7);
    return 0;
}