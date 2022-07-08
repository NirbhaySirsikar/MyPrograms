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

void rightView(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        while (q.front() != NULL)
        {
            int rightele = q.front()->data;
            if (q.front()->left != NULL)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right != NULL)
            {
                q.push(q.front()->right);
            }
            q.pop();
            if (q.front() == NULL)
            {
                cout << rightele << " ";
            }
        }
        q.pop();
        if (q.empty())
        {
            return;
        }
        q.push(NULL);
    }
}

void leftView(node*root){
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        cout<<q.front()->data<<" ";
        while (q.front() != NULL)
        {
            int rightele = q.front()->data;
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
        q.pop();
        if (q.empty())
        {
            return;
        }
        q.push(NULL);
    }

}

int main()
{
    //         1
    //     2       3
    //   4   5   6   7

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    rightView(root);
    cout<<endl;
    leftView(root);
    return 0;
}