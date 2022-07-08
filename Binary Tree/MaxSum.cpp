#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;
int maxPathsumhelper(node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsum = maxPathsumhelper(root->left, ans);
    int rightsum = maxPathsumhelper(root->right, ans);
    int nodemax = max(max(root->data, root->data + leftsum + rightsum), max(root->data + leftsum, root->data + rightsum));
    ans = max(ans, nodemax);
    int singlepathsum = max(root->data, max(root->data + leftsum, root->data + rightsum));
    return singlepathsum;
}
int maxsum(node *root)
{
    int ans = INT_MIN;
    maxPathsumhelper(root, ans);
    return ans;
}
int main()
{
    vector<int> tree = {1, 2, 3, 4, -1, -1, 5};
    vector<int> tree2 = {1, -12, 3, 4, -1, 5, -6};
    node *root = binaryTree(tree2);
    cout<<maxsum(root);
    return 0;
}