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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node *Node = new node(curr);
    if (start == end)
    {
        return Node;
    }
    int pos = search(inorder, start, end, curr);
    Node->left = buildTree(preorder, inorder, start, pos - 1);
    Node->right = buildTree(preorder, inorder, pos + 1, end);
    return Node;
}
node *buildTreepost(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    node *Node = new node(curr);
    if (start == end)
    {
        return Node;
    }
    int pos = search(inorder, start, end, curr);
    Node->right = buildTreepost(postorder, inorder, pos + 1, end);
    Node->left = buildTreepost(postorder, inorder, start, pos - 1);
    return Node;
}

void inorderprint(node *root)
{

    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    node *root = buildTree(preorder, inorder, 0, 4);
    inorderprint(root);
    cout<<endl;
    node *root1 = buildTreepost(postorder, inorder, 0, 4);
    inorderprint(root1);
    return 0;
}