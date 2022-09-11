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
		int n, a, b;
		cin >> n >> a >> b;
		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			pq.push(num);
		}

		for (int i = 0; i < b; i++)
		{
			int temp = pq.top();
			pq.pop();
			pq.push(temp xor a);
		}
		// int arr[n];
		// for (int i = 0; i < n; i++) {
		//     cin>>arr[i];
		// }
		// for (int i = 0; i < b; i++) {
		//     int m=0;
		//     for (int j = 1; j < n; j++) {
		//         if(arr[j]<arr[m]) m=j;
		//     }
		//     arr[m]=arr[m] xor a;
		// }
		//     sort(arr,arr+n);
		// for (int i = 0; i < n; i++) {
		//     cout<<arr[i]<<" ";
		// }
		while (!pq.empty())
		{
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}
	return 0;
}
