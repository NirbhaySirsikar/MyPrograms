//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N)
    {
        // Write your code here
        int ans = 0;
        sort(X.begin(), X.end(), greater<int>());
        sort(Y.begin(), Y.end(), greater<int>());
        int x = 1, y = 1, ptrx = 0, ptry = 0;
        while (ptrx < M-1 && ptry < N-1)
        {
            int xcost = X[ptrx], ycost = Y[ptry];
            cout<<xcost<<" "<<ycost<<"\n";
            if (xcost > ycost)
            {
                ans += xcost * x;
                y++;
                ptrx++;
                cout << "x";
            }
            else if (xcost < ycost)
            {
                ans += ycost * y;
                x++;
                ptry++;
                cout << "y";
            }
            else
            {
                // cout<<"YEs"<<x<<" ";
                ans += ycost * y;
                x++;
                ptry++;
                cout << "y'";
            }
            cout<<"\n";
        }
        // while (ptry < N-1)
        while(ptrx<M-1)
        {
            int xcost = X[ptrx];
            cout<<xcost<<"\n";
            ans += xcost * x;
            y++;
            ptrx++;
            cout << "x''";
        }
        // while (ptrx < M-1)
        while(ptry<N-1)
        {
            int ycost = Y[ptry];
            cout<<ycost<<"\n";
            ans += ycost * y;
            x++;
            ptry++;
            cout << "y''";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> X(m - 1), Y(n - 1);
        for (int i = 0; i < m - 1; i++)
        {
            cin >> X[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> Y[i];
        }
        Solution ob;
        int ans = ob.minimumCostOfBreaking(X, Y, m, n);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends