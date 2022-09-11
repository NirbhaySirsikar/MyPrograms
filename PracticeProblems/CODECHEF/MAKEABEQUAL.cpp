#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N=1e5+7,m=1e9+7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vi a(n);vi b(n);
	    int ctr=0;
	    for (int i = 0; i < n; i++) {
	        ctr+= abs(a[i]-b[i]);
			cout<<a[i]<<b[i]<<" ";
	    }
	    if(ctr%2) cout<<-1;
	    else cout<<ctr/2;
	    cout<<"\n";
	}
	return 0;
}
