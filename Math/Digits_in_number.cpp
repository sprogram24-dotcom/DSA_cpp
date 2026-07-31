#include <iostream>
#include <math.h>
using namespace std;

void printDigits(int num){
    int count=0;
    int sum=0;
    while(num>0){
        int dig=num%10;
        cout<<dig;
        sum+=dig;
        num=num/10;
        count++;
    }
    cout<<endl<<count<<endl<<sum;
}

int main(){
    int num=3568;
    printDigits(num);
    // shortcut
    cout<<endl<<(int)(log10(num)+1);
    return 0;
}