#include<bits/stdc++.h>
using namespace std;

void piReplace(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        piReplace(s.substr(2));
    }else{
        cout<<s[0];
        piReplace(s.substr(1));
    }
}

int main(){
    piReplace("pippppiiiipi");
    return 0;
}