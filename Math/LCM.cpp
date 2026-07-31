#include <iostream>
using namespace std;

// brute force
int lcm(int a,int b){
    int lcm=0;
    for(int i=a*b;i>max(a,b);i--){
        if(i%a==0 && i%b==0){
            lcm=i;
        }
    }
    return lcm;
}

//a*b= gcd(a,b)*lcm(a,b)
int gcd_(int a, int b){
    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }else{
            b=b%b;
        }
    }
    if(a==0) return b;
    return a;
}

int LCM(int a, int b){
    int gcd=gcd_(a,b);
    int lcm=(a*b)/gcd;
    return lcm;
}

int main(){
    int a=21;
    int b=18;
    cout<<LCM(a,b);
    return 0;
}