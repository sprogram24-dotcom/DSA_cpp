#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> arr,int target){
    int m=arr.size();
    int n=arr[0].size();
    int row=0; int col=n-1;
    if(target>arr[col][col] && target<arr[0][0]) return false;
    while(row<m && col>=0){
        if(arr[row][col]==target){
            return true;
        }else if(target< arr[row][col]){
            col--;
        }else{
            row++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<searchMatrix(arr,31);
    return 0;
}