#include <iostream>
#include <vector>
using namespace std;

void traverse(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{3,4,5,6,10,11},{2,4,8,7}};
    traverse(arr);
    return 0;
}