#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int res=arr[0];
		for (int i = 1; i < n; i++)
		{
			res=__gcd(res,arr[i]);
		}
		cout<<res*n;
	    cout<<endl;
	}
	return 0;
}