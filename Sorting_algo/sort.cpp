#include <iostream>
using namespace std;

void count(int arr[],int n){
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }else if(arr[i]==1){
            one++;
        }else{
            two++;
        }
    }
    // for(int i=0;i<zero;i++){
    //     arr[i]=0;
    // }
    // for(int i=zero;i<zero+one;i++){
    //     arr[i]=1;
    // }
    // for(int i=zero+one;i<zero+one+two;i++){
    //     arr[i]=2;
    // }
    int idx=0;
    for(int i=0;i<zero;i++){
        arr[idx++]=0;
    }
    for(int i=0;i<one;i++){
        arr[idx++]=1;
    }
    for(int i=0;i<two;i++){
        arr[idx++]=2;
    }
}

int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    count(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}