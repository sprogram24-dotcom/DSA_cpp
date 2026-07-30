#include <iostream>
#include <algorithm>
using namespace std;

string reverseWordpos(string s){
    int n=s.length();
    reverse(s.begin(),s.end());
    string ans;
    for(int i=0;i<s.length();i++){ 
        string word;
        while(s[i]!=' ' && i<n){ //picking each word
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
            ans+=" "+word;
        
    }
    return ans.substr(1);
}

string revwordpos(string s){
    int n=s.length();
    reverse(s.begin(),s.end());
    string ans;
    for(int i=0;i<n;i++){
        
        string word;
        while(s[i]!=' ' && i<n){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}


int main(){
    string s=" hello   world ";
    cout<<reverseWordpos(s);
    return 0;
}