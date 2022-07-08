#include <bits/stdc++.h>
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

void InsertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        node *n = new node(val);
        head = n;
        return;
    }
    node *temp = head;
    node *newnode = new node(val);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;
}
void deletetion(node *&head, int val)
{
    if(head==NULL){
        return;
    }
    if(head->next==head){
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
        if (temp == head)
        {
            cout << "not found" << endl;
            return;
        }
    }
    if(temp->next==head){
        head=temp->next->next;
    }
    node*todelete=temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main()
{
    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtHead(head, 0);
    display(head);
    deletetion(head,0);
    display(head);

    return 0;
}