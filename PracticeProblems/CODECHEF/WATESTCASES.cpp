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
	    vi len(n);
		string res="";
	    for (int i = 0; i < n; i++) {
	        cin>>len[i];
	    }
		cin>>res;
	    int m=1000;
	    for (int i = 0; i < n; i++) {
	        if(!res[i]) m=min(m,len[i]);
	    }
	    cout<<m;
	    cout<<endl;
	}
	return 0;
}
/*
5
3
5 10 3
000
3
5 10 3
001
3
5 5 3
001
3
5 5 3
101
5
10 100 100 10 10
00001

*/