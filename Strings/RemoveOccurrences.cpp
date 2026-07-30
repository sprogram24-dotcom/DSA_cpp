#include <iostream>
using namespace std;

string removeOccurrence(string s,string x){
    while(s.find(x)<s.length() && s.length()>0){
        s=s.erase(s.find(x),x.length());
    }
    return s;
}

int main(){
    string s="daabcbaabcbc";
    cout<<removeOccurrence(s,"abc");
    return 0;
}