//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int N;
    bool check(int n,int m,vector<vector<int>> g)
    {
        N=n;
        vector<vector<int>> graph(n+1);
        for(auto i:g){
            int u=i[0];
            int v=i[1];
            // if(v==0 || u==0) cout<<"::"<<i<<"::";
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    // for(auto e:graph[2]) cout<<e<<":";
        set<int> st;
        for(int i=1;i<=n;i++){
            if(dfs(i,st,graph)){
                return true;
            }
        }
        return false;
         
    }
    bool dfs(int curr,set<int> st,vector<vector<int>> graph){
        st.insert(curr);
        if(st.size()==N){
            return true;
        }
        for(auto n:graph[curr]){
            if(!st.count(n) && dfs(n,st,graph)){
                return true;
            }
        }
        st.erase(curr);
        return false;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends