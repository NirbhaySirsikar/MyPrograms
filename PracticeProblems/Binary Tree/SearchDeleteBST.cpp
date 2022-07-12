#include <bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;
node *searchBST(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == val)
    {
        return root;
    }
    if (root->data > val)
    {
        return searchBST(root->left, val);
    }
    else
    {
        return searchBST(root->right, val);
    }
}
node* inordersucc(node*root){
    node*curr=root->right;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node *deleteBST(node *root, int val)
{
    if (root == NULL)
    {
        cout << "NOT FOUND" << endl;
        return NULL;
    }
    if (root->data > val)
    {
        root->left = deleteBST(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = deleteBST(root->right, val);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            node *temp = inordersucc(root);
            root->data = temp->data;
            root->right = deleteBST(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    node *root = binaryTree({4, 2, 5, 1, 3, -1, 6});
    // inorder(root);
    node *ans = searchBST(root, 6);
    ans != NULL ? cout << ans->data << endl : cout << "Not Found" << endl;
    deleteBST(root,2);
    inorder(root);

    return 0;
}