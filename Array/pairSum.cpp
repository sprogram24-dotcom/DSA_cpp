#include <iostream>
#include <vector>
using namespace std;

// brute force 
vector <int> pairSum(int arr[],int size, int t){
    vector <int> ans;
    for (int i=0;i<size;i++){
        for (int j=0; j<size; j++){
            
            if(arr[i]+arr[j]== t){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

// 2pointer Approach
vector <int> pairSum2(int arr[],int s,int t){
    int i=0;
    int j=s-1;
    vector <int> ans;
    while (i<j){
        if(arr[i]+arr[j]<t){
            i++;
        }else if(arr[i]+arr[j]>t){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
    int arr[]={2,7,11,1,15};
    int t= 26;
    vector <int> ans=pairSum2(arr,5,t);
    for(int val: ans){
        cout<<val<<" ";
    }
}