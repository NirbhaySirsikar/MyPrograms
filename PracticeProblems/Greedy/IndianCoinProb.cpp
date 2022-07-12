#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    vi a={2000,500,100,50,20,10,5,2,1};
    sort(a.begin(),a.end(),greater<int>());
    int x=54,count=0;
    for (int i = 0; i < a.size(); i++)
    {
        count+=x/a[i];
        x-=x/a[i]*a[i];
    }
        cout<<count<<endl;
    return 0;
}