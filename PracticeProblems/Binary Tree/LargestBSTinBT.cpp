#include <bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

struct Info
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
Info LargestBST(node *root)
{
    if (root == NULL)
    {
        return {0, INT_MAX, INT_MIN, 0, true};
    }
    if (root->right == NULL && root->left == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }
    Info leftInfo = LargestBST(root->left);
    cout<<root->data<<": left isBST: "<<leftInfo.isBST<<endl;
    Info rightInfo = LargestBST(root->right);
    cout<<root->data<<": right isBST: "<<rightInfo.isBST<<endl;
        // cout << root->data << endl;

    Info curr;
    // cout<<curr.isBST<<":"<<endl;
    curr.size = (1 + leftInfo.size + rightInfo.size);
    if (leftInfo.isBST && rightInfo.isBST && (leftInfo.max < root->data && rightInfo.min > root->data))
    {
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));
        // curr.min=leftInfo.min;
        // curr.max=rightInfo.max;
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
    // node *root1 = bintree({15, 20, 30, 5,-1,-1,-1});
    node*root1=new node(15);
    root1->left=new node(20);
    root1->right=new node(30);
    root1->left->left=new node(5);
    levelorder(root1);
    cout<<endl;
    cout << "largest bst is: " << LargestBST(root1).ans;

    return 0;
}