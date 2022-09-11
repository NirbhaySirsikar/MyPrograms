#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, m = 1e9 + 7;

struct minmax
{
	int min, max;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vi arr(n);
		rep(i, 0, n) cin >> arr[i];
		struct minmax curr, currmax, ans;
		curr.min = INT_MAX;
		curr.max = INT_MIN;
		currmax.min = INT_MAX;
		currmax.max = INT_MIN;
		ans.min = INT_MAX;
		ans.max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			currmax.min = min(currmax.min, arr[i]);
			currmax.max = max(currmax.max, arr[i]);
			if (currmax.min * currmax.max < arr[i] * arr[i])
			{
				currmax.min = currmax.max = arr[i];
			}
			// if (curr.min * curr.max > arr[i] * arr[i])
			// {
			// 	curr.max = curr.min = arr[i];
			// }
			// ans.min = min(ans.min, curr.min * curr.max);
			ans.max = max(ans.max, currmax.min * currmax.max);
		}
		for (int i = 0; i < n; i++)
		{
			curr.min = min(curr.min, arr[i]);
			curr.max = max(curr.max, arr[i]);
			if (curr.min * curr.max > arr[i] * arr[i])
			{
				curr.max = curr.min = arr[i];
			}
			ans.min = min(ans.min, curr.min * curr.max);
			// ans.max = max(ans.max, currmax.min * currmax.max);
		}
		cout << ans.min << " " << ans.max;
		cout << "\n";
	}
	return 0;
}
