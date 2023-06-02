//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int step=arr[0],jump=1,maxr=arr[0];
        for (int i = 1; i < n; i++)
        {
            if(i==n-1) return jump;
            maxr=max(maxr,arr[i]+i);
            step--;
            if(step==0){
                jump++;
                if(i>=maxr) return -1;
                step=maxr-i;
            }
            
        }
        
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends