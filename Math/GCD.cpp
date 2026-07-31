#include <iostream>
using namespace std;

// brute force
int GCD(int x,int y){
    int gcd=1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    return gcd;
}

// Euclid's algo
int impGCD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int main(){
    int a=12;
    int b=18;
    cout<<GCD(a,b);
    return 0;
}