#include <bits/stdc++.h>
using namespace std;
#define n 20
class que
{
public:
    int front;
    int back;
    int *arr;

    que()
    {
        front = -1;
        back = -1;
        arr = new int[n];
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
class Stack
{
    que q1;
    que q2;
    int N;

public:
    Stack()
    {
        N = 0;
    }
    void push(int val)
    {
        q2.push(val);
        while (!q1.empty())
        {
            q2.push(q1.peek());
            q1.pop();
        }
        que temp = q2;
        q2 = q1;
        q1 = temp;
        N++;
    }
    void pop()
    {
        q1.pop();
        N--;
    }
    int size()
    {
        return N;
    }
    void display()
    {
        for (int i = q1.front; i <= q1.back; i++)
        {
            cout << q1.arr[i] << " ";
        }
        cout << endl;
    }
};
class Stack1
{
    queue<int> q1;
    queue<int> q2;
    int N;

public:
    Stack1()
    {
        N = 0;
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
        N--;
    }
    void push(int val)
    {
        q1.push(val);
    }
    int top(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();
        q2.push(val);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return val;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.display();
    st.push(2);
    st.display();
    st.push(3);
    st.display();
    st.push(4);
    st.display();
    st.pop();
    st.display();
    Stack1 st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.pop();
    cout<<st1.top()<<endl;
    return 0;
}