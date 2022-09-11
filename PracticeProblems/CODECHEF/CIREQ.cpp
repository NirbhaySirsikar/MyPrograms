#include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define pii pair<int, int>
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ff first
// #define ss second

// int main()
// {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		int count = 1;
// 		int curriter = 0;
// 		vi arr(n);
// 		// int lastele=INT_MAX;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> arr[i];
// 		}
// 		sort(arr.begin(), arr.end());
// 		for (int i = 0; i < n; i++)
// 		{
// 			if (arr[i] < curriter + 1)
// 			{
// 				count++;
// 				curriter = 0;
// 			}
// 			curriter++;
// 		}
// 		cout << count << endl;
// 	}
// 	return 0;
// }
using namespace std;

int main() {
	// ios_base :: sync_with_stdio(0);
	// cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n + 1);
		for (int i = 0; i < a.size(); i++)
		{
			cout<<a[i]<<" ";
		}
		
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			a[x]++;
		}
		int sum = 0, ans = 0;
		for (int i = 1; i <= n; i++) {
			sum += a[i];
			ans = max(ans, (sum + i - 1) / i);
		}
		cout << ans << '\n';
	}
	return 0;
}
