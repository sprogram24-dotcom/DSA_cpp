#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec; // empty vector
    // cout<<vec[0];

    vector <char> v1= {'a','b','c','d'};
    // for each loop
    for (char val: v1){ //val is the actual vaue of each index not the index itself
        cout<<val<<" ";
    }
    // cout<<v1[0]<<endl;
    // cout<<v1[1]<<endl;
    // cout<<v1[2]<<endl;
    // cout<<v1[3]<<endl;
    cout<<endl;
    vector <int> v2(3,1);
    for(int val: v2){
        cout<<val<<" ";
    }

}