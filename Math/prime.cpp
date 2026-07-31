#include <iostream>
#include <vector>
using namespace std;

bool checkPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
//TLE
void prime_in_range(int st, int end){
    int count=0;
    for(int i=st;i<=end;i++){
        bool prime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=false;
            }
        }
        if(prime){
            count++;
            cout<< i<<" ";
        }
    }
    cout<<endl<<count;
}

//sieve of eratosthenes
int countPrime(int num){
    vector<bool> isPrime(num,true);
    int count=0;
    for(int i=2;i<num;i++){
        if(isPrime[i]){
            count++;
            
            for(int j=i*2;j<num;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    return count;
}


int main(){
    int num=10;
    cout<<countPrime(num);
    return 0;
}