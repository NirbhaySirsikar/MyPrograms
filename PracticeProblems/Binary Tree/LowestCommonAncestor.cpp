#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;
bool getpath(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    if (getpath(root->left, key, path) || getpath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!getpath(root, n1, path1) || !getpath(root, n2, path2))
    {
        return -1;
    }
    int pc;
    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc - 1];
}
node* lca2(node*root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    node*leftlca=lca2(root->left,n1,n2);
    node*rightlca=lca2(root->right,n1,n2);

    if(leftlca&&rightlca){
        return root;
    }
    if(leftlca!=NULL){
        return leftlca;
    }return rightlca;    
}
int main()  
{
    vector<int> tree = {1, 2, 3, 4, -1, 5, 6, -1, -1, 7, -1, -1, -1};
    node *root = binaryTree(tree);
    cout << LCA(root, 7, 6);
    node*lcanode=lca2(root,7,6);
    cout<<lcanode->data;
    return 0;
}