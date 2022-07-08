#include<bits/stdc++.h>
#include"binaryTree.cpp"
using namespace std;
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calcPointers(node*root,node**first,node**mid,node**last,node**prev){
    if(root==NULL){
        return;
    }
    calcPointers(root->left,first,mid,last,prev);
    if(*prev&&(*prev)->data>root->data)
    {
        if(!*first){
            *first=*prev;
            *mid=root;
        }else{
            *last=root;
        }
    }
    *prev=root;
    calcPointers(root->right,first,mid,last,prev);
}
void restoreBST(node*root){
    if(root==NULL){
        return;
    }
    node*first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;

    calcPointers(root,&first, &mid,&last,&prev);
    if(first&&last){
        swap(&(first->data),&(last->data));
    }
    else if(first&&mid){
        swap(&(first->data),&(mid->data));
    }
}

int main(){
    node*root1=bintree({6,9,3,1,4,-1,13});
    inorder(root1);
    cout<<endl;
    restoreBST(root1);
    inorder(root1);
    return 0;
}