#include <iostream>
using namespace std;

int target(int arr[],int size, int t){
    for(int i=0; i<size; i++){
        if(t==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {1,2,3,4,6,8};
    cout<<target(arr,6,7);
}