#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node *binaryTree(vector<int> levelorder)
{
    int No_of_nodes = levelorder.size();
    queue<node *> q;
    int i = 0;
    while (i < No_of_nodes)
    {
        levelorder[i] == -1 ? q.push(NULL) : q.push(new node(levelorder[i]));
        i++;
    }
    queue<node *> helper;
    helper.push(q.front());
    node *mainroot = helper.front();
    q.pop();
    while (!helper.empty())
    {
        if (helper.front() != NULL)
        {
            if (q.empty())
            {
                return mainroot;
            }
            helper.front()->left = q.front();
            if (q.front() != NULL)
                helper.push(q.front());
            q.pop();
            helper.front()->right = q.front();
            if (q.front() != NULL)
                helper.push(q.front());
            q.pop();
        }
        helper.pop();
    }
    return mainroot;
}
void levelorder(struct node *root)
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
        cout << endl;
        q.pop();
        if (q.empty())
        {
            return;
        }
        q.push(NULL);
    }
}
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
node *bintree(vector<int> levelorder)
{
    int n = levelorder.size();
    vector<node *> arr(n, NULL);
    for (int i = 0; i < n; i++)
    {
        levelorder[i] == -1 ? arr[i] = NULL : arr[i] = new node(levelorder[i]);
    }
    int i = 0;
    int j = 1;
    node *root = arr[0];
    while (j < n)
    {
        if (arr[i] != NULL)
        {

            arr[i]->left = arr[j];
            j++;
            arr[i]->right = arr[j];
            j++;
        }
        i++;
    }
    return root;
}

// void levelorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         if (q.front()->left != NULL)
//         {
//             q.push(q.front()->left);
//         }
//         if (q.front()->right != NULL)
//         {
//             q.push(q.front()->right);
//         }
//         cout << q.front()->data << " ";
//         q.pop();
//         if (q.empty())
//         {
//             return;
//         }
//     }
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     node *root = bintree(arr);
//     levelorder(root);
//     // struct node *root = new node(1);
//     // root->left = new node(2);
//     // root->right = new node(3);
//     // root->left->left = new node(4);
//     // root->left->right = new node(5);
//     // root->right->left = new node(6);
//     // root->right->right = new node(7);

//     // levelorder(root);
//     // cout << endl;
//     return 0;
// }