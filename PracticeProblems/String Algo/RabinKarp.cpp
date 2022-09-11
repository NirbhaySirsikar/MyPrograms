#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int p=31,N=1e5+7,m=1e9+7;
int main(){
    
    string t="hellohilow";
    string s="lo";
    int T=t.size(),S=s.size();
    vector<long long> powers(N,1);
    for (size_t i = 0; i < N; i++)
    {
        powers[i+1]=(powers[i]*p)%m;
    }
    vector<long long> hash(T+1,0);
    for (int i = 0; i < T; i++)
    {
        hash[i+1]=(hash[i]+(t[i]-'a'+1)*powers[i])%m;
    }
    int hash_s=0;
    for (int i = 0; i < S; i++)
    {
        hash_s+=((s[i]-'a'+1)*powers[i])%m;
    }
    for (int i = 0; i < T-S+1; i++)
    {
        long long curr=(hash[i+S]-hash[i]+m)%m;
        if(curr==(hash_s*powers[i])%m){
            cout<<i<<endl;
        }
    }
    
    
    return 0;
}