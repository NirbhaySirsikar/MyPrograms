#include<bits/stdc++.h>
#include"binaryTree.cpp"
using namespace std;
bool isBST(node*root,node*min=NULL,node*max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL&&root->data<=min->data){
        return false;
    }
    if(max!=NULL&&root->data>=max->data){
        return false;
    }
    bool left=isBST(root->left,min,root);
    bool right=isBST(root->right,root,max);
    return left && right;
    }


int main(){
    node*root=binaryTree({4,2,6,1,3,5,7});
    inorder(root);
    cout<<isBST(root);
    return 0;
}