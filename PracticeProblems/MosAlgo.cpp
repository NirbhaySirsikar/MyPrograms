#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, mod = 1e9 + 7;
struct Q{
    int idx,l,r;
};
int len;
bool compare(Q q1,Q q2){
    if(q1.l/len == q2.l/len){
        return q1.r>q2.r;
    }
    return q1.l/len>q2.l/len;
}
Q q[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    len = (int)sqrtl(n) + 1;
    vi b(len, mod);
    for (int i = 0; i < n; i++)
    {
        b[i / len] = min(arr[i], b[i / len]);
    }
    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        int l,r;
        cin>>l>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i;
    }
    sort(q,q+queries,compare);
    vector<int> ans(queries);
    int curr_l=0,curr_r=-1,l,r,curr_ans=0;
    for (size_t i = 0; i < queries; i++)
    {
        l=q[i].l;
        r=q[i].r;
        l--;r--;
        while(curr_r<r){
            curr_r++;
            curr_ans+=arr[curr_r];

        }
        while(curr_l<l){
            curr_ans-=arr[curr_l];
            curr_l++;
                
        }
        while(curr_l>l){
            curr_l--;
            curr_ans+=arr[curr_l];
                
        }
        while(curr_r>r){
            curr_ans-=arr[curr_r];
            curr_r--;
                
        }
        ans[q[i].idx]=curr_ans;
    }
    for (int i = 0; i < queries; i++)
    {
        cout<<ans[i]<<" ";
    }
       
    return 0;
}