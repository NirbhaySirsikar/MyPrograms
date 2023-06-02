//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {

  public:
  int N=1e9+7;
    int getSum(int x, int y, int z) {
        // Your code goes here
        vector<vector<vector<int>>> dp(61,vector<vector<int>>(61,vector<int>(61,0)));
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        Solution ob;
        cout << ob.getSum(x, y, z) << "\n";
    }
    return 0;
}

// } Driver Code Ends