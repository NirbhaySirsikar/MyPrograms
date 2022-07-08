#include<bits/stdc++.h>
using namespace std;

void subs(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    subs(s.substr(1),ans);
    subs(s.substr(1),ans+(s[0]));
    
}

int main(){
    subs("ABC","");
    return 0;
}