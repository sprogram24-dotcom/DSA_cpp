#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec={1,2,3,4};
    vector <int> ans;
    int prefix=1;
    int suffix=1;
    for(int i=0;i<vec.size();i++){
        prefix*=vec[i-1];
        suffix*=vec[vec.size()-i-1];
        ans[i]=prefix*suffix;
    }
}