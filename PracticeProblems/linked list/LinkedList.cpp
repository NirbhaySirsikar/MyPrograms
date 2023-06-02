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

void insertAtStart(node *&head, int val)
{   
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    n->next = head;
    head = n;
}

void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool Search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *reverseRecursion(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *revhead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return revhead;
}

node *kreverse(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;
    while (curr != NULL && count != k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
        head->next = kreverse(next, k);

    return prev;
}

bool detectcycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next->next != NULL)
    {
        // cout << "executed: slow: " << slow->data << " fast: " << fast->data << endl;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
        if (fast->next == NULL)
            return 0;
    }
    return 0;
}

void makecycle(node *&head, int val)
{
    node *temp = head;
    node *pos = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (pos->data != val)
    {
        pos = pos->next;
    }

    temp->next = pos;
}

void removecycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int length(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

node *appendk(node *&head, int k)
{
    int trav = length(head) - k;
    int count = 1;
    node *newhead;
    node *temp = head;
    node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    while (trav != count)
    {
        temp = temp->next;
        count++;
    }
    newhead = temp->next;
    temp->next = NULL;
    temp2->next = head;
    return newhead;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int k;
    node *ptr1;
    node *ptr2;
    if (l2 > l1)
    {
        k = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    else
    {
        k = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    while (k)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        k--;
    }
    while (ptr1->next != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp = head1;
    node *temp1 = head2;
    while (pos)
    {
        temp = temp->next;
        pos--;
    }
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    p3->next = NULL;
    return dummynode->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

void EvenAfterOdd(node *&head)
{
    node *odd = head;
    node *evenstart = head->next;
    node *even = head->next;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even=even->next;
    }
    odd->next = evenstart;
    if (odd->next == NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    display(head);
    EvenAfterOdd(head);
    display(head);

    // node *head1 = NULL;
    // node *head2 = NULL;
    // insertAtEnd(head1, 1);
    // insertAtEnd(head1, 4);
    // insertAtEnd(head1, 7);
    // insertAtEnd(head1, 8);
    // insertAtEnd(head1, 9);
    // insertAtEnd(head1, 11);
    // insertAtEnd(head1, 15);

    // insertAtEnd(head2, 2);
    // insertAtEnd(head2, 6);
    // insertAtEnd(head2, 10);
    // insertAtEnd(head2, 12);
    // display(head1);
    // display(head2);

    // display(mergeRecursive(head1, head2));

    // intersect(head1,head2,4);
    // cout<<intersection(head1,head2)<<endl;

    // node *head = NULL;
    // // display(head);
    // // insertAtEnd(head, 1);
    // // display(head);
    // // insertAtEnd(head, 2);
    // // display(head);
    // // insertAtEnd(head, 3);
    // // display(head);
    // // insertAtEnd(head, 4);
    // // display(head);
    // // insertAtEnd(head, 5);
    // // display(head);
    // // display(head);
    // // insertAtStart(head, 7);
    // // display(head);
    // // deletion(head, 6);
    // // cout << Search(head, 6) << endl;
    // // display(head);
    // // deleteAtHead(head);
    // // insertAtEnd(head, 6);
    // // display(head);
    // // display(reverseRecursion(head));
    // // display(reverse(head));
    // // display(reverseRecursion(head));
    // // kreverse(head,2);
    // // display(kreverse(head, 3));
    // insertAtEnd(head, 1);
    // insertAtEnd(head, 2);
    // insertAtEnd(head, 3);
    // insertAtEnd(head, 4);
    // insertAtEnd(head, 5);
    // insertAtEnd(head, 6);
    // insertAtEnd(head, 7);
    // display(head);
    // makecycle(head, 3);
    // cout << detectcycle(head) << endl;
    // removecycle(head);
    // display(head);
    // cout << detectcycle(head) << endl;
    // display(appendk(head, 3));
    // display(head);
    return 0;
}