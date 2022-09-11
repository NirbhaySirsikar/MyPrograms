#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
	// your code goes here
	int n=5;
	set<int> s;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			int ans=2*(i+j)+i*j;
			cout<<i<<" "<<j<<" "<<ans<<endl;
			s.insert(ans);
		}
		
	}
	cout<<endl;
	for(auto i:s) cout<<i<<endl;
	
	cout << endl;
	return 0;
}
