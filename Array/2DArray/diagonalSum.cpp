#include <iostream>
using namespace std;

int diagonalSum(int arr[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-1-i){
            sum+=arr[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int arr[4][4]={{1,2,3,4},{3,4,5,6},{2,4,8,7},{5,6,8,9}};
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(arr1,3);
    return 0;
}