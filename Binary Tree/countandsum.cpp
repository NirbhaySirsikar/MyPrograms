#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int countofNodes(node* root){
    if(root==NULL){
        return 0;
    }
    int count=countofNodes(root->left)+countofNodes(root->right)+1;
    return count;
}
int sumofNodes(node*root){
    if(root==NULL){
        return 0;
    }
    int sum=sumofNodes(root->left)+sumofNodes(root->right)+root->data;
    return sum;
}

int main(){
    
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<countofNodes(root)<<endl;
    cout<<sumofNodes(root)<<endl;
    return 0;
}