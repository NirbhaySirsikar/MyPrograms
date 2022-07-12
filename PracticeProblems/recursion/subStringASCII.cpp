#include<bits/stdc++.h>
using namespace std;

void subs(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    int code=ch;
    string ros=s.substr(1);
    subs(ros,ans);
    subs(ros,ans+ch);
    subs(ros,ans+to_string(code));
}

int main(){
    subs("AB","");
    return 0;
}