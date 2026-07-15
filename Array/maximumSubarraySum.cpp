#include <iostream>
#include <climits>
using namespace std;

// brute force
void subArray(int arr[],int s){
    for (int start=0; start<s; start++){
        for (int end=start; end<s; end++){
            for (int i=start; i<=end; i++){
                cout<<arr[i];
            }
        cout<<" ";
        }
    cout<<endl;
    }
}

int subArraySum(int arr[], int s){
    int maxSum=INT_MIN;
    for (int start=0; start<s; start++){
        int currSum=0;
        for(int end=start; end<s; end++){
            currSum+= arr[end];
            maxSum= max(maxSum,currSum);
        }
    }
    return maxSum;
}

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    cout<<subArraySum(arr,7);
    return 0;
}