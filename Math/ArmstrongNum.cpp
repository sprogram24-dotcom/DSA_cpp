#include <iostream>
#include <math.h>
using namespace std;

bool armstrongNum(int num){
    int copyN=num;
    int sum0fCubes=0;
    while(num!=0){
        int dig=num%10;
        sum0fCubes+=(dig*dig*dig);
        num/=10;
    }
    return sum0fCubes==copyN;
}

int main(){
    int num=371;
    cout<<armstrongNum(num);
    return 0;
}