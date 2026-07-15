#include <iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+= arr[i];
    }
    return sum;
}

int product(int arr[],int size){
    int p=1;
    for(int i=0; i<size; i++){
        p*= arr[i];
    }
    return p;
}

int main(){
    int arr[5]= {2,4,1,2,40};
    cout<<sum(arr,5)<<endl;
    cout<<product(arr,5)<<endl;
}