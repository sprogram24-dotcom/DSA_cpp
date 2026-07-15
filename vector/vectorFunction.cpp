#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v1;
    cout<<v1.size()<<endl;

    v1.push_back(21);//adding element at the end
    v1.push_back(23);
    v1.push_back(25);
    v1.push_back(27);
    cout<<"after pushback= "<<v1.size()<<endl;
    for (int val: v1){
        cout<<val<<" ";
    }
    cout<<endl;
    v1.pop_back(); //eleminating element from the end
    cout<<"after popback= "<<v1.size()<<endl;
    for (int val: v1){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<v1.at(2)<<endl; //get element from particuler index
    cout<<v1.front()<<endl; //first element of the vector
}