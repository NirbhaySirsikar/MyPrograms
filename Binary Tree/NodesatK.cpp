#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        left=NULL;
        right=NULL;
        data=val;
    }
};
//case 1
void printSubtreeNodes(node*root,int k){
    if(root==NULL|| k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }

    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);

}

//case 2
int printNodesatK(node*root,node*target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesatK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right,k-dl-2);
        }
        return dl+1;
    }
    int dr=printNodesatK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->left,k-dr-2);
        }
        return dr+1;
    }
    return -1;
}
int main(){
//         1
//     2       3
// 4
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    printNodesatK(root,root->left,1);
    return 0;
}