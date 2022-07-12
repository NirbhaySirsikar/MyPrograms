#include<bits/stdc++.h>
#include"BinaryTree.cpp"
using namespace std;

node* constructBST(int preorder[],int * preorderidx,int key,int min,int max,int n){
    node*root=NULL;
    if(*preorderidx>=n){
        return NULL;
    }
    if(key>min && key<max){
        root=new node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=constructBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=constructBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }

    return root;
}

int main(){
    int arr[]={10,2,1,13,11};
    int n =5;
    int preorderidx=0;
    node*root=constructBST(arr,&preorderidx,arr[0],INT_MIN,INT_MAX,n);
    preorder(root);
    return 0;
}