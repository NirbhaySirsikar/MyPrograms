#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(b) for (int i = 0; i < b; i++)
#define ff first
#define ss second
#define sv(a) sort(a.begin(),a.end()) 
const int N=1e5+7,mod=1e9+7;

void solve(){
    int n;cin>>n;
    vi arr(n);
    rep(n) cin>>arr[i];
    int mx=0;
    rep(n) mx=max(mx,arr[i]);
    vector<priority_queue<int>>parr(mx);
    for(int i=1;i<mx;i++){
        for(int j=0;j<n;j++){
            if(arr[j]%i==0){
                parr[i].push(arr[j]);
            }
        }
    }
    int q;cin>>q;
    queue<int> temp;
    while(q--){
        long long ans=0;
        int p,k;cin>>p>>k;
        priority_queue<int> pq=parr[p];
        for (int i = 0; i < k; i++) {
            if(arr[i]%p==0 && !pq.empty()){
                ans+=pq.top();
                pq.pop();
            }else{
                ans+=arr[i];
            }    
        }
        cout<<ans<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	   // cout<<endl;
	}
	return 0;
}
