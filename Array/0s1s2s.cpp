#include <iostream>
#include <vector>
using namespace std;


void sortArray(vector<int> &arr){
    int zeros=0;
    int ones=0;
    int twos=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            zeros++;
        }else if(arr[i]==1){
            ones++;
        }else{
            twos++;
        }
        int idx=0;
        for(int i=0;i<zeros;i++){
            arr[idx++]=0;
        }
        for(int i=0;i<ones;i++){
            arr[idx++]=1;
        }
        for(int i=0;i<twos;i++){
            arr[idx++]=2;
        }
    }
}

// dutch national flag algorithm
//0s-> 0 to low-1
// 1s-> low to mid-1
// 2s-> high+1 to n
// unsorted part-> mid to high

void dutchNationalFalg(vector<int> &arr){
    int low=0;
    int mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++; mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main(){
    vector<int> arr={2,0,2,1,1,0,1,2,0,0};
    vector<int> arr1={0,0,0};
    dutchNationalFalg(arr1);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i];
    }
    return 0;
}