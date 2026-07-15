#include <iostream>
using namespace std;
// brute force approch
int container(int arr[],int s){
    int maxWater=0;
    int area;
    int h;
    for(int i=0;i<s;i++){
        int w=0;
        for(int j=i+1;j<s;j++){
            w=j-i;
            h=min(arr[i],arr[j]);
            area= h*w;
            maxWater=max(area,maxWater);
        }
    }
    return maxWater;
}
// 2pointer approach
int maxWater2(int arr[], int s){
    int lp=0;
    int rp=s-1;
    int maxWater=0;
    while (lp<rp){
        int w=rp-lp;
        int h=min(arr[lp],arr[rp]);
        int area=h*w;
        // cout<<area;
        maxWater= max(area, maxWater);
        // cout<<maxWater<<endl;
        arr[lp]<arr[rp]? lp++:rp--;
    }
    return maxWater;
}


int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    cout<<maxWater2(arr,9);
    return 0;
}