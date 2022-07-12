#include <bits/stdc++.h>
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

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

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
        cout<<endl;
        q.pop();
        if(q.empty()){
            return;
        }
        q.push(NULL);
    }
}

int sumatK(node *root, int k)
{
    if(root==NULL){
        return -1;
    }
    queue<node *> q;
    int count = 0;
    q.push(root);
    q.push(NULL);
    while (count != k)
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
            q.pop();
        }
            count++;
        q.pop();
        if(q.empty()){
            cout<<"empty"<<endl;
            return -1;
        }
        q.push(NULL);

    }
    int sum=0;
    while(q.front()!=NULL){
        sum+=q.front()->data;
        q.pop();
    }
    return sum;
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout<<endl;
    cout<<sumatK(root,2)<<endl;
    //         1
    //     2       3
    // 4   5       6   7
    return 0;
}