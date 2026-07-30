#include <iostream>
#include <cstring>
using namespace std;

int strCom(char str[]){
    int count=1;
    int n=sizeof(str);
    string s;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            count++;
        }else{
            if(count==1){
                s+=str[i];
            }else{
                s+=str[i]+to_string(count);
            }
            count=1;
        }
    }
    return s.length();
}



int main(){
    char str[]={'a','a','b','b','c','c','c'};
    char str1[]={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout<<strlen(str1);
    cout<<strCom(str1);
    return 0;
}