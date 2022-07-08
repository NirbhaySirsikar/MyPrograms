#include<bits/stdc++.h>
#include"binaryTree.cpp"
using namespace std;

node* sortedArrayToBST(int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node*root=new node(inorder[mid]);
    root->left=sortedArrayToBST(inorder,start,mid-1);
    root->right=sortedArrayToBST(inorder,mid+1,end);
    return root;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    node*root=sortedArrayToBST(arr,0,6);
    levelorder(root);
    // cout<<root->left->left->right;
    return 0;
}