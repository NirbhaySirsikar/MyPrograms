#include<bits/stdc++.h>
#include"binaryTree.cpp"
using namespace std;

// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalanced(node*root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false||isBalanced(root->right)==false)
    {
        return false;
    }
    if(abs(height(root->left)-height(root->right))<=0){
        return true;
    }
    return false;
}
bool BalancedEff(node*root,int*h){
    int lh=0,rh=0;
    if(root==NULL){
        *h=0;
        return true;
    }


    if(BalancedEff(root->left,&lh)==false||BalancedEff(root->right,&rh)==false){
        return false;
    }
    *h=max(lh,rh)+1;
    if(abs(lh-rh)<=0){
        return true;
    }
    return false;
}
int main(){
    
    // struct node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    node*root=bintree({1,2,3,4,5,6,7});
    cout<<isBalanced(root);
    int h=0;
    cout<<BalancedEff(root,&h);
    return 0;
}