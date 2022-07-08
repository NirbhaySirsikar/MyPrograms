#include <bits/stdc++.h>
#include "binaryTree.cpp"
using namespace std;

void zigzag(node *root)
{
    bool LeftToright = 1;
    stack<node *> curr;
    curr.push(root);
    stack<node *> next;
    while (!curr.empty())
    {
        if (LeftToright)
        {
            while (!curr.empty())
            {
                if (curr.top() == NULL)
                {
                    curr.pop();
                    continue;
                }
                next.push(curr.top()->left);
                next.push(curr.top()->right);
                cout << curr.top()->data << " ";
                curr.pop();
            }
            stack<node *> temp = curr;
            curr = next;
            next = temp;
            LeftToright = false;
        }
        else
        {
            while (!curr.empty())
            {

                if (curr.top() == NULL)
                {
                    curr.pop();
                    continue;
                }
                next.push(curr.top()->right);
                next.push(curr.top()->left);
                cout << curr.top()->data << " ";
                curr.pop();
            }
            stack<node *> temp = curr;
            curr = next;
            next = temp;
            LeftToright = true;
        }
    }
}

int main()
{
    node *root = bintree({1, 2, 3, -1, 4, -1, 5, 6, 7});
    zigzag(root);
    return 0;
}