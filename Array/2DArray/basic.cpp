#include <iostream>
#include <climits>
using namespace std;

pair<int, int> linearSearch(int mat[][3], int rows,int cols,int t){
    pair<int,int> p;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==t){
                p.first=i;
                p.second=j;
                return p;
            }
        }
    }
    p.first=-1;
    p.second=-1;
    return p;
}


int main(){
    int arr[3][3]={{11,2,3},{2,3,4},{3,4,5}};
    int arr1[4][4]={{11,2,3,3},{2,3,4,4},{3,4,5,3},{2,3,4,5}};
    int rows=4;
    int cols=3;
    // pair<int,int> p=linearSearch(arr,rows,cols,9);
    // cout<<p.first<<" "<<p.second;
    // cout<<maxRowSum(arr,4,3)<<endl;
    // cout<<maxColSum(arr,4,3);

    // cout<<diagonalSum(arr1,4);

    return 0;
}