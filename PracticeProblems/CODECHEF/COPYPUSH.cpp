#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int num=51;
		// vector<vector<map<int,int>>>dp(51,vector<map<int,int>>(51));
		    map<int,int> dp[51][51];


		bool flag = false;
		bool oneuse = true;
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 1; i < n; i++)
		{
			cout << s.substr(0, i) << " " << s.substr(i, i) << endl;
			if (flag)
				break;
			else if (s.substr(0, i) == s.substr(i, i))
			{
				cout << "op2" << endl;
				oneuse = false;
				i += i -1;
			}
			else if (!oneuse)
			{
				oneuse = true;
				cout << "op1" << endl;
				// continue;
			}
			else
			{
				cout << "failed" << endl;
				flag = true;
			}
		}	
		flag ? cout << "NO" << endl : cout << "YES" << endl;
	}
	return 0;
}
