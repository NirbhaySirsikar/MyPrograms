#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

bool compare(pii p1,pii p2){
    double v1=(double)p1.ff/p1.ss;
    double v2=(double)p2.ff/p2.ss;
    return v1>v2;
}
int main(){
    int n;cin>>n;
    int W;
    vector<pii> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].ff>>a[i].ss;
    }
    cin>>W;
    int ans=0;
    sort(a.begin(),a.end(),compare);
    for (int i = 0; i < n; i++)
    {
        if(a[i].ss<=W){
            ans+=a[i].ff;
            W-=a[i].ss;
        }else{
            double vw=(double) a[i].ff/a[i].ss;
            ans+=W*vw;
            W=0;
            break;
        }
    }
    cout<<ans;
    
    return 0;
}

// 5
// 21 7
// 24 4
// 12 6
// 40 5
// 30 6
// 20