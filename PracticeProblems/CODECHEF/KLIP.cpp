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
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		bool one =false;
		for (int i = 0; i < n; i++)
		{
		    int a=(s[i]-'0');
		    if(a==1 && i<(n-k+1)){
				one =true;
			}else if((a==0 && one)&& i<(n-k+1)){
				one= false;
			}
			if(one)
			s[i]='0'+(a xor 1);
			else s[i]='0'+a;
		}
		cout<<s;
		cout << "\n";
	}
	return 0;
}
