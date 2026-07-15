#include <iostream>
using namespace std;

void uniqueValues(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;i++){
            if(arr[i]==arr[j]){
                break;
            }else{
                cout<<arr[i];
            }
        }
    }
}

int main(){
    int arr[4]={2,2,3,1};
    int arr[];

}