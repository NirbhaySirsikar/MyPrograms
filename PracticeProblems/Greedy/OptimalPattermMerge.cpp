#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int n;
    cin>>n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    priority_queue<int,vi,greater<int>> minheap;
    for (int i = 0; i < n; i++)
    {
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1){
        int a1=minheap.top();
        minheap.pop();
        int a2=minheap.top();
        minheap.pop();
        ans+=a1+a2;
        minheap.push(a1+a2);
    }
    cout<<ans;
    return 0;
}