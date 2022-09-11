#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    string s;
    cin>>s;
    int e=1;
    int a=0;
    int ab=0;
    int abc=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a'){
            a+=e;
        }
        if(s[i]=='b'){
            ab+=a;
        }if(s[i]=='c'){
            abc+=ab;
        }if(s[i]=='?'){
            abc=3*abc+ab;
            ab=3*ab+a;
            a=3*a+e;
            e=3*e;
        }
    }
    cout<<abc;
    return 0;
}