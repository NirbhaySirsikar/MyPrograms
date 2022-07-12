#include <bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

bool identical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    bool valsame = false;
    root1->data == root2->data ? valsame = true : false;
    if (valsame && (identical(root1->left, root2->left) && identical(root1->right, root2->right)))
    {
        return true;
    }
    return false;
}

int main()
{
    node*root1=bintree({1,-1,3,2,5});
    node*root2=bintree({1,-1,3,2,5});
    node*root3=bintree({1,-1,2,-1,3,-1,5});
    inorder(root1);
    cout<<endl;
    inorder(root2);
    cout<<endl;
    cout<<identical(root1,root2)<<endl;
    cout<<identical(root1,root3)<<endl;

    return 0;
}