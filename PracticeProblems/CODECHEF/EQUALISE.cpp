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
		int n, m;
		cin >> n >> m;
		while (n % 2 == 0)
		{
			n = n >> 1;
		}
		while (m % 2 == 0)
		{
			m = m >> 1;
		}
		if (m == n)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
/*
4
5 20
6 6
12 2
50 20
*/
