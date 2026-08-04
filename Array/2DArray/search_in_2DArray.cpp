#include <iostream>
#include <vector>
using namespace std;

// bool searchTarget(vector<vector<int>> arr,int target){
//     int rows=arr.size();
//     int cols=arr[0].size();
//     int st=0; int end=rows-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid][0]>=target && arr[mid][cols-1]<=target){
//             int start=mid;
//             int ends=cols-1;
//             while(start<=ends){
//                 int mid2=start+(ends-start)/2;
//                 if(arr[start][mid2]==target){
//                     return true;
//                 }else if(arr[start][mid2]>=target){
//                     ends=mid-1;
//                 }else{
//                     start=mid+1;
//                 }
//             }
//         }else if(target>=arr[mid][cols-1]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return false;
// }



bool searchRow(vector<vector<int>> arr, int row,int target){
    int n=arr[0].size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[row][mid]==target){
            return true;
        }else if(target>arr[row][mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}


bool searchTarget(vector<vector<int>> arr, int target){
    int m=arr.size();
    int n=arr[0].size();
    int startRow=0, endRow=m-1;
    while(startRow<=endRow){
        int midRow=startRow+(endRow-startRow)/2;
        if(target>=arr[midRow][0] && target<=arr[midRow][n-1]){
            // binary search in the row
            return searchRow(arr,midRow,target);
        }else if(target> arr[midRow][n-1]){
            // go downward
            startRow=midRow+1;
        }else{
            // go upward
            endRow=midRow-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchTarget(arr,34);
    
    return 0;
}