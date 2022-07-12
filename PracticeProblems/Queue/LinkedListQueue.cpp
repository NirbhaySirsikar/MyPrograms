#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << front->data << endl;
    }
    bool empty() { return (front == NULL) ? true : false; }
};

int main()
{
    queue q;
    q.push(1);
    cout << q.empty() << endl;
    q.peek();
    return 0;
}