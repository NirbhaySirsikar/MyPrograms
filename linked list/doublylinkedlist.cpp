#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertatstart(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertatstart(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletenode(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->data != val)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        head->next->prev = NULL;
        head = head->next;
        delete temp;
        return;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    temp->prev->next = temp->next;
    delete temp;
}

int main()
{
    node *head = NULL;
    insertatstart(head, 2);
    display(head);
    insertatstart(head, 1);
    display(head);
    insertatend(head, 3);
    display(head);
    deletenode(head, 2);
    display(head);

    return 0;
}