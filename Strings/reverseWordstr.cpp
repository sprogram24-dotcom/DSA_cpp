#include <iostream>
#include <algorithm>
using namespace std;

string reverseWordpos(string s){
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        string word=" ";
        while(s[i]!=' '){
            
        }
    }
}

int main(){
    string s=" hello world ";
    reverse(s.begin(),s.end());
    cout<<s;

    return 0;
}