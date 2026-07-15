#include <iostream>
using namespace std;

int buySell(int arr[], int s){
    int maxP=0;
    int bestBuy=arr[0];
    for(int i=1; i<s; i++){
        if(arr[i]>bestBuy){
            maxP= max(maxP,arr[i]-bestBuy);
        }
        bestBuy= min(bestBuy,arr[i]);
    }
    return maxP;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    cout<<buySell(arr,6);
    return 0;
}