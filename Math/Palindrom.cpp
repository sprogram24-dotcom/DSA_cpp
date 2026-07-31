#include <iostream>
#include <climits>
using namespace std;

int reverseNum(int num){
    int rev=0;
    while(num!=0){
       int dig=num%10;
       if(rev>INT_MAX/10 || rev<INT_MIN/10){
            return 0;
       }
       rev=rev*10+dig;
       num/=10;
    }
    return rev;
}

bool palindrom(int num){
    if(num<0) return false;
    int rev=reverseNum(num);
    if(rev==num){
        return true;
    }
}

int main(){
    int num=12321;
    cout<<palindrom(num);
    return 0;
}