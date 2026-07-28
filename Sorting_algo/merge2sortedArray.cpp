#include <iostream>
using namespace std;

void merge2array(int a[],int x,int b[],int y,int ab[]){
    ab[x+y];
    int n=0;
    int m=0;
    for(int i=0;i<x+y;i++){ 
        if(a[n]<=b[m]){
            ab[i]=a[n];
            n++;
        }else{
            ab[i]=b[m];
            m++;
        }
    }
}

void merge(int a[],int x,int b[],int y){
    int n=x-y-1;
    int m=y-1;
    for(int i=x-1;i>=0 && m>=0 && n>=0;i--){
        if(a[n]>=b[m]){
            a[i]=a[n];
            n--;
        }else{
            a[i]=b[m];
            m--;
        }
    }
    while(m>=0){
        a[x]=b[m];
        x--;
        m--;
    }
}

int main(){
    int arr1[]={4,5,6,0,0,0};
    int arr2[]={1,2,3};
    merge(arr1,6,arr2,3);
    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}