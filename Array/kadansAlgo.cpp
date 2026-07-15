#include <iostream>
using namespace std;
// 
int maxSubarraySum(int arr[],int size){
    int currSum=0;
    int maxSum=0;
    for(int i=0; i<size; i++){
        currSum+= arr[i];
        maxSum= max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main(){
    int arr[]={2,-1,34,-32,3,9};
    cout<<maxSubarraySum(arr,6);
    return 0;
}