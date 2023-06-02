//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string s, int k){
    	int n=s.length();
    	string ans="";
    	int count=0;
    	for(int i=n-1;i>=0;i--){
    	    if(s[i]=='-'){
    	        continue;
    	    }else{
    	        if(s[i]>96){
    	            s[i]-=32;
    	        }
    	        ans=s[i]+ans;
    	        count++;
    	    }
    	    if(count && k==count){
    	        ans='-'+ans;
    	        count=0;
    	    }
    	}
        if(ans[0]=='-') ans=ans.substr(1,ans.length()-1);
    	return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends