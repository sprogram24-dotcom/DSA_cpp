#include <iostream>
#include <climits>
using namespace std;

int maxColSum(int arr[][4],int rows,int cols){
    int maxSum=INT_MIN;
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++){
            sum+=arr[j][i];
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int maxRowSum(int arr[][3],int rows,int cols){
    int maxSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int main(){
    int arr[4][4]={{1,2,3,4},{3,4,5,6},{2,4,8,7},{5,6,8,9}};
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<maxRowSum(arr1,3,3)<<endl;;
    cout<<maxColSum(arr,4,4);
    return 0;
}