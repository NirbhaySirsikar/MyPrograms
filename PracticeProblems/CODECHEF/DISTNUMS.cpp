#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define sv(a) sort(a.begin(), a.end())
const int N = 1e5 + 7, m = 1e9 + 7;

int solve(int n, int k)
{
	// vi ans;
	queue<int> q;
	q.push(n);
	q.push(-1);
	for (int i = 0; i < k; i++)
	{
		cout << "he ";
		while (q.front() != -1)
		{
			vi divisors;
			divisors.push_back(1);
			divisors.push_back(q.front());
			for (int i = 2; i * i <= q.front(); i++)
			{
				if (q.front() % i == 0)
				{
					divisors.push_back(i);
					divisors.push_back(q.front() / i);
				}
			}
			int a = q.front();
			q.pop();
			for (int div : divisors)
			{
				q.push(div * a);
			}
			// divisors.push_back(-1);
		}
		q.pop();
		q.push(-1);
	}
	int ans = 0;
	while (q.front() != -1)
	{
		ans += q.front();
	}
	return ans;
}

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		// cout << solve(n, k);
		queue<int> q;
		q.push(n);
		q.push(-1);
		for (int i = 0; i < k; i++)
		{
			while (q.front() != -1)
			{
			cout << "he ";
				vi divisors;
				divisors.push_back(1);
				divisors.push_back(q.front());
				for (int i = 2; i * i < q.front(); i++)
				{
					if (q.front() % i == 0)
					{
						divisors.push_back(i);
						divisors.push_back(q.front() / i);
					}
				}
				int a = q.front();
				q.pop();
				for (int div : divisors)
				{
					q.push(div * a);
				}
				// divisors.push_back(-1);
			}
			q.pop();
			q.push(-1);
		}
		int ans = 0;
		while (q.front() != -1)
		{
			ans += q.front();
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
