#include <iostream>
#include <algorithm>
using namespace std;
// brute force  
int majorityElement(int arr[],int s){
    int c=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>s/2){
            return arr[i];
        }
    }
}
// optimizeApproch
int majorityElement2(int arr[],int s){
    sort(arr,arr+s);
    int f=1;
    int ans=arr[0];
    for (int i=1;i<s;i++){ 
        if (arr[i]==arr[i-1]){
            f++;
        }else{
            f=1;
            ans=arr[i];
        }
        if(f>s/2){
            return ans;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,1,2,1,1,1};
    cout<<majorityElement2(arr,6);
    return 0;
}