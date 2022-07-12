#include <bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    // (root->data<val){
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
int main()
{
    // node*root=NULL;
    // root=insertBST(root,5);
    // insertBST(root,1);
    // insertBST(root,3);
    // insertBST(root,4);
    // insertBST(root,2);
    // insertBST(root,7);
    // inorder(root);
    node *root1 = NULL;
    int arr[] = {7, 5, 4, 6, 8, 9};
    root1=insertBST(root1, 7);
    insertBST(root1, 5);
    insertBST(root1, 4);
    insertBST(root1, 6);
    insertBST(root1, 8);
    insertBST(root1, 9);
    inorder(root1);

    return 0;
}