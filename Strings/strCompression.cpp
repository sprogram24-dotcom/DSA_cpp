#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int strCom(vector<char> str){
    int idx=0;
    int n=str.size();
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        int count=0;
        while(ch==str[i] && i<n){
            count++; i++;
        }
        if(count==1){
            str[idx]=ch;
            idx++;
        }else{
            str[idx]=ch;
            idx++;
            string ct=to_string(count);
            for(char chr: ct){
                str[idx]=chr;
                idx++;
            }
        }
        i--;
    }
    return idx;
}

int revision(vector<char> s){
    int idx=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        int count=0;
        char ch=s[i];
        while(i<n && s[i]==ch){
            count++; i++;
        }
        if(count==1){
            s[idx]=ch;
            idx++;
        }else{
            s[idx]=ch;
            idx++;
            string str=to_string(count);
            for(char dig: str){
                s[idx]=dig;
                idx++;
            }
        }
        i--;
    }
    s.resize(idx);
    return idx;
}



int main(){
    char str[]={'a','a','b','b','c','c','c'};
    vector<char> str1={'a','a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','c','c','c'};
    cout<<revision(str1);
    return 0;
}