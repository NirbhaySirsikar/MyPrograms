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
		int nor, pre, n, r;
		cin >> nor >> pre >> n >> r;
		//
		int lo = 0, hi = n;
		int np;
		// int np = n / 2;
		// int ans;
		while (hi - lo > 0)
		{
			// cout<<0;
			np = (hi + lo) / 2;
			int cost = np * pre + (n - np) * nor;
			if (cost > r)
			{
				cout << lo << " " << hi << " " << np << endl;
				hi = np;
			}
			else
			{
				cout << lo << " " << hi << " " << np << endl;
				if (cost - nor + pre > r)
				{
					break;
				}
				lo = np + 1;
			}
		}

		// int cost = pre * np + nor * (n - np);
		// if (cost > r)
		// {
		// 	while (cost > r)
		// 	{
		// 		np--;
		// 		if (np < 0)
		// 			break;
		// 		cost = cost - pre + nor;
		// 	}
		// }
		// else
		// {
		// 	while (cost < r)
		// 	{
		// 		np++;
		// 		if (np > n)
		// 			break;
		// 		cost = cost + pre - nor;
		// 	}
		// 	np--;
		// }

		// int cost = pre * np + nor * (n - np);
		// while (cost > r)
		// {
		// 	np--;
		// 	if (np < 0)
		// 		break;
		// 	cost = cost - pre + nor;
		// 	cout<<n-np<<" "<<np<<" "<<cost<<endl;
		// }
		if (lo == hi)
			cout << -1;
		else if (hi - lo == 1)
			cout << n - hi << " " << hi;
		// (lo>hi) ? cout << -1 :
		else
		{
			cout << n - np << " " << np;
		}
		// (np < 0 || np > n) ? cout << -1 : cout << n - np << " " << np;
		cout << endl;
	}
	return 0;
}
