#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N=1e9+7,m=1e9+7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vi freq(N,0);
	    vi arr(n);
	    rep(i,0,n) cin>>arr[i];
	    for(int i=0;i<n;i++){
	        freq[arr[i]]++;
	    }
	    int ans=0;
	    rep(i,1,N){
	        if(freq[i]>0) ans+=freq[i]*(freq[i]-1)/2;
	    }
	    
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
