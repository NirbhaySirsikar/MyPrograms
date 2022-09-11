#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5+7,mod=1e9+7;
struct Q{
    int l,r,idx;
};
int rootN;
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN==q2.l/rootN){
        return q1.r>q2.r;
    }return q1.l<q2.l;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rootN=sqrtl(N);
    int queries;cin>>queries;
    for (int i = 0; i < queries; i++)
    {
        int l,r;cin>>l>>r;
        q[i].idx=i;
        q[i].l=l;
        q[i].r=r;

    }
    sort(q,q+queries,compare);
    vi ans(queries);
    int cur_l=0,l,r,cur_r=-1,cur_ans=0;
    vi freq(10*N,0);
    for (int i = 0; i < queries; i++)
    {
        l=q[i].l;r=q[i].r;
        l--,r--;
        while(cur_r<r){
            cur_r++;
            freq[arr[cur_r]]++;
            if(freq[arr[cur_r]]==1) cur_ans++;
        }
        while(cur_r>r){
            freq[arr[cur_r]]--;
            if(freq[arr[cur_r]]==0) cur_ans--;
            cur_r--;
        }
        while(cur_l<l){
            freq[arr[cur_l]]--;
            if(freq[arr[cur_l]]==0) cur_ans--;
            cur_l++;
        }
        while(cur_l>l){
            cur_l--;
            freq[arr[cur_l]]++;
            if(freq[arr[cur_l]]==1) cur_ans++;
        }
        ans[q[i].idx]=cur_ans;
    }
    for(auto i : ans) cout<<i<<"\n";
    return 0;
}