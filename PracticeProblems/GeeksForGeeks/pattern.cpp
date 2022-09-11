//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> pattern(int n){
        // code here
            vector<string> arr(n,"");
            int a=1;
        for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                arr[i]+="--";
            }
            cout<<a;
            for(int k=2;k<(n-i);k++){
                arr[i]+="*";
                arr[i]+=a+k;
            }
            for(int k=1;k<(n-i);k++){
                arr[i]+="*";
                arr[i]+=a*a+k;
            }
            a+=n-i;
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends