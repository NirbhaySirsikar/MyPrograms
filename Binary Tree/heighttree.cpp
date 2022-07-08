#include <bits/stdc++.h>
#include "binaryTree.cpp"
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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 1 + max(height(root->left), height(root->right));
    return ans;
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);
    int currDia = height(root->left) + height(root->right) + 1;
    return max(max(leftDia, rightDia), currDia);
}
int diametereff(node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int leftDia = diametereff(root->left, &lh);
    int rightDia = diametereff(root->right, &rh);
    int curDia = lh + rh + 1;
    *height = max(lh, rh) + 1;
    int ans = max(max(leftDia, rightDia), curDia);
    return ans;
}
int main()
{
    //         1
    //     2       3
    // 4   5     6   7
    node *root1 = bintree({1, 2, 3, 4, 5, 6, 7});
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << height(root1) << endl;
    cout << diameter(root1) << endl;
    int h = 0;
    cout << diametereff(root1, &h) << endl;
    levelorder(root);
    cout<<endl;
    levelorder(root1);
    return 0;
}