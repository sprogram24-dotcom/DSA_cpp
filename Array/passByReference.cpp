#include <iostream>
using namespace std;
void mul(int arr[], int size, int num){
    for (int i=0; i<size; i++){
        arr[i]= arr[i]*2;
    }
}

int main(){
    int arr[]={1,2,3,4};
    cout<<"before"<<endl;
    for(int i=0; i<4; i++){
        cout<<arr[i]<<endl;
    }
    mul(arr, 4,4);
    // elements of array changed permanently
    cout<<"after"<<endl;
    for(int i=0; i<4; i++){
        cout<<arr[i]<<endl;
    }
}
