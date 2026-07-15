#include <iostream>
#include <climits>
using namespace std;
int main(){
    int marks[]={12,-45,3,98,10};
    int length=sizeof(marks)/sizeof(int);
    // for (int i=0; i<length; i++){
    //     cout<< marks[i]<<endl;
    // }
    int min= INT_MAX; //refers +infinity
    for (int i=0; i<length; i++){
        if(min>marks[i]){
            min=marks[i];
        }
    }
    cout<<min<<endl;
    for (int i=0; i<length; i++){
        if(marks[i]==min){
            cout<<"index= "<<i<<endl;
        }
    }

    int max= INT_MIN; //refers -infinity
    for( int i=0; i<length; i++){
        if(max<marks[i]){
            max=marks[i];
        }
    }
    cout<<max<<endl;
    for (int i=0; i<length; i++){
        if(marks[i]==max){
            cout<<"index= "<<i<<endl;
        }
    }
}