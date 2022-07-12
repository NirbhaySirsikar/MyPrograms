#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
int main()
{
    int k;
    cin >> k;
    vector<vector<int>> a(k);
    for (int i = 0; i < k; i++)
    {
        int size;
        cin >> size;
        a[i] = vi(size);
        for (int j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }
    vi idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    for (int i = 0; i < k; i++)
    {
        pii p;
        p.first=a[i][0];
        p.second=i;
        pq.push(p);
    }
    vi ans;
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();

        ans.push_back(x.first);
        if(idx[x.second]+1<a[x.second].size()){
            pq.push({a[x.second][idx[x.second]+1],x.second});
        }
        idx[x.second]++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}