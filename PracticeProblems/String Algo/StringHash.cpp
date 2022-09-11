#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

const int N=1e5+7,m=1e9+7;
vector<long long> powers(N);
int p=31;

long long calculate_hash(string s){
    long long ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        ans+=((s[i]-'a'+1)*powers[i])%m;
    }
    return ans;
}

int main(){
    powers[0]=1;
    for (int i = 1; i < N; i++)
    {
        powers[i]=(powers[i-1]*p)%m;
    }
    vector<string> strings={"aa","bb","aa","c","c","bb","k"};
    vector<long long> hashes;
    for(auto w : strings){
        hashes.push_back(calculate_hash(w));
    }
    sort(hashes.begin(),hashes.end());
    int distinct=0;
    for (int i = 0; i < hashes.size(); i++)
    {
        if(i==0 or hashes[i]!=hashes[i-1]){
            distinct++;
        }
    }
    cout<<distinct<<endl;
    
    return 0;
}