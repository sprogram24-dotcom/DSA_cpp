#include <iostream>
#include <climits>
using namespace std;

int reverseNum(int num){
    int rev=0;
    while(num>0){
        int dig=num%10;
        if(rev>INT_MAX/10 || rev<INT_MIN/10){
            return 0;
        }
        rev=rev*10+dig;
        num=num/10;
    }
    return rev;
}

int main(){
    int num = 4537;
    cout<<reverseNum(num);
    return 0;
}