//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
	const int N=1e5+7;
    vector<int> prime(N,1);
	void calcprime(){
        for(int i=2;i*i<N;i++){
            if(prime[i]){
                for(int j=i*i;j<N;j+=i){
                    prime[j]=0;
                }
            }
        }
	}
class Solution {
	public:
		int Count(int L, int R){
		    // Code here
            calcprime();
		    int ans=0;
		    for(int i=L;i<=R;i++) ans+=prime[i];
		    int comp=R-L-ans;
		    return abs(comp-ans);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends