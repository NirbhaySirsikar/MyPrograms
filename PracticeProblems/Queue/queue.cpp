#include <bits/stdc++.h>
using namespace std;
#define n 20
class Queue
{
    int *arr;
    int back;
    int front;

public:
    Queue()
    {
        arr = new int[n];
        back = -1;
        front = -1;
    }
    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = val;
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {

        if (front > back || front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        front++;
    }
    int peek()
    {
        return arr[front];
    }
    bool empty()
    {
        return ((front > back || front == -1) ? true : false);
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.peek();
    q.push(2);
    q.peek();
    q.push(3);
    q.peek();
    q.push(4);
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    cout<<q.empty()<<endl;
    return 0;
}