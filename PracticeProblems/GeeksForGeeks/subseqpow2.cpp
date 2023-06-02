//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
long long mod=1e9+7;
    bool power(long long n){return !(n&&(n & (n - 1)));}
    long long pow2(long long n){long long ans=1;for(long long i=0;i<n;i++) ans=(ans*2)%mod;return ans;}
    long long numberOfSubsequences(int n, long long arr[]){
        // code here 
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(power(arr[i])){
                cnt++;
            }
        }
        return (pow2(cnt)-1) % mod;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends