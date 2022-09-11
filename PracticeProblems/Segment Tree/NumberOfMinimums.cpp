#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, mod = 1e9 + 7;
vi a(N);
pii tree[4 * N];

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node].ff = a[st];
        tree[node].ss = 1;
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    if (tree[2 * node].ff == tree[2 * node + 1].ff)
    {
        tree[node].ss = tree[2 * node].ss + tree[2 * node + 1].ss;
    }
}
pii query(int node, int a, int b, int l, int r)
{
    if (a < l || b > r)
    {
        return {INT_MAX, 0};
    }
    if (a == l && b == r)
        return tree[node];
    int mid = (l + r) / 2;
    if (a >= l && b <= mid)
        return query(2 * node, a, b, l, mid);
    if (a >= mid && b <= r)
        return query(2 * node + 1, a, b, mid + 1, r);
    return min(query(2 * node, a, mid, l, mid), query(2 * node + 1, mid + 1, b, mid + 1, r));
}
void update(int node, int i, int val, int l, int r)
{
    if (l == r && l == i)
    {
        a[i] = val;
        tree[node].ff = val;
        return;
    }
    int mid = (l + r) / 2;
    if (i > mid)
        update(2 * node + 1, i, val, mid + 1, r);
    else
        update(2 * node, i, val, l, mid);


    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    if (tree[2 * node].ff == tree[2 * node + 1].ff)
    {
        tree[node].ss = tree[2 * node].ss + tree[2 * node + 1].ss;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);

    int inp, a, b;

    for (int i = 0; i < m; i++)
    {
        cin >>inp >> a >> b;
        if(inp==1){
            update(1,a,b,0,n-1);
        }else if(inp==2){
            cout<<query(1,a,b,0,n-1).ff<<" "<<query(1,a,b,0,n-1).ss<<"\n";
        }
    }
    // int up, idx;
    // cin >> up >> idx;
    // update(1, idx, up, 0, n - 1);
    // cin >> a >> b;
    // cout << query(1, a, b, 0, n - 1) << "\n";

    return 0;
}