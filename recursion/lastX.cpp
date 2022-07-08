#include<bits/stdc++.h>
using namespace std;

void lastX(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='x'){
        lastX(s.substr(1));
        cout<<s[0];
    }else{
        cout<<s[0];
        lastX(s.substr(1));
    }
}

int main(){
    lastX("axxbdxcefxhix"); 
    return 0;
}