#include <iostream>
#include <vector>
using namespace std;

int countDigitOccurrences(vector<int> nums,int digit){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        while(nums[i]!=0){
            int dig=nums[i]%10;
            if(dig==digit){
                count++;
            }
            nums[i]/=10;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {12,54,32,22};
    cout<<countDigitOccurrences(nums,2);
    return 0;
}