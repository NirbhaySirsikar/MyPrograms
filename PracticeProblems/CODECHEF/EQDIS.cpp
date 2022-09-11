#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, m = 1e9 + 7;

int main()
{
	// ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vi freq(N, 0);
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			freq[arr[i]]++;
		}
		// for(int i=0;i<n;i++){
		//     freq[arr[i]]++;
		// }
		int even = 0;
		for (int i = 0; i <= n; i++)
		{
			// cout << "aha";
			if (freq[i]== 1)
			{
				even++;
			}
		}
		even & 1 ? cout << "NO" : cout << "YES";
		cout << "\n";
	}
	return 0;
}
