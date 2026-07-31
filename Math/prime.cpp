#include <iostream>
using namespace std;

bool checkPrime(int num){
    for(int i=0;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num=23;
    cout<<2;
    cout<<checkPrime(num);
    return 0;
}