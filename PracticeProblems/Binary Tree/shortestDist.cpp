#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// lowest common ancestor::LCA
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *left = LCA(root->left, n1, n2);
    node *right = LCA(root->right, n1, n2);
    if (left != NULL || right != NULL)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    if (left != NULL)
    {
        return LCA(root->left, n1, n2);
    }
    return LCA(root->right, n1, n2);
}

int finddist(node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }
    int left = finddist(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return finddist(root->right, k, dist + 1);
}
int DistBtwNodes(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);
    int d1 = finddist(lca, n1, 0);
    int d2= finddist(lca, n2, 0);
    return d1 + d2;
}

int main()
{
    //         1
    //     2       3
    //   4   5   6   7

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<DistBtwNodes(root,4,7);
    return 0;
}