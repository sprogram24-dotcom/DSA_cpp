#include <iostream>
using namespace std;

int mooreAlgo(int arr[],int s){
    int freq=0;
    int ans=0;
    for (int i=0;i<s;i++){
        if (freq==0){
            ans=arr[i];
        }
        if(arr[i]==arr[i-1]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,2,1,1,1};
    cout<<mooreAlgo(arr,6);
}