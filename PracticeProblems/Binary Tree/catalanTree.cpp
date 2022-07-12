#include <bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;
vector<node *> constructTrees(int start, int end)
{
    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i <= end; i++)
    {
        vector<node *> leftsubtree = constructTrees(start, i - 1);
        vector<node *> rightsubtree = constructTrees(i + 1, end);
        for (int j = 0; j < leftsubtree.size(); j++)
        {
            node *Left = leftsubtree[j];
            for (int k = 0; k < rightsubtree.size(); k++)
            {
                node *Right = rightsubtree[k];
                node *n = new node(i);
                n->left = Left;
                n->right = Right;
                trees.push_back(n);
            }
        }
    }
    return trees;
}

int main()
{
    vector<node *> trees = constructTrees(1, 3);
    for (int i = 0; i < trees.size(); i++)
    {
        preorder(trees[i]);
        cout << endl;
    }

    return 0;
}