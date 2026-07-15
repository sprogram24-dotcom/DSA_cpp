#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    cout<<v2.size()<<endl; //3
    cout<<v2.capacity()<<endl; //4
}

