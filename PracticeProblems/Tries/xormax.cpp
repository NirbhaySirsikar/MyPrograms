#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    TrieNode *next[2];
    TrieNode()
    {
        next[0] = NULL;
        next[1] = NULL;
    }
};
TrieNode *buildtrie(vector<int> &a)
{
    int n = a.size();
    TrieNode *root = new TrieNode();
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        TrieNode *cur = new TrieNode();
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (cur->next[bit] == NULL)
                cur->next[bit] = new TrieNode();
            cur = cur->next[bit];
        }
    }
    return root;
}
int helper(TrieNode *root, vector<int> &a)
{
    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i];
        TrieNode *cur = root;
        int cur_max = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = ((num >> i) & 1) ? 0 : 1;
            if (cur->next[bit])
            {
                cur_max <<= 1;
                cur_max |= 1;
                cur = cur->next[bit];
            }
            else
            {
                cur_max <<= 1;
                cur_max |= 0;
                cur = cur->next[bit xor 1];
            }
        }
        res=max(res,cur_max);
    }
    return res;
}
int main()
{
    vector<int> a = {3, 10, 5, 15, 2};
    TrieNode *root = buildtrie(a);
    int ans = helper(root, a);
    cout<<ans;
    return 0;
}