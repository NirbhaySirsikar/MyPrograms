#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelorder(struct node *root)
{
    if(root==NULL){
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        while (q.front() != NULL)
        {
            if (q.front()->left != NULL)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right != NULL)
            {
                q.push(q.front()->right);
            }
            cout << q.front()->data << " ";
            q.pop();
        }
        q.pop();
        cout<<endl;
        if(q.empty()){
            return;
        }
        q.push(NULL);
    }
}
void sumreplace(node*root){
    if(root==NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }if(root->right!=NULL){
        root->data+=root->right->data;
    }
    
}

int main(){
    
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    levelorder(root);
    cout<<endl;
    sumreplace(root);
    levelorder(root);
    cout<<endl;

    return 0;
}