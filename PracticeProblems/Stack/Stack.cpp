#include <bits/stdc++.h>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int ele)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = ele;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        top--;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "no elements in the stack" << endl;
        }
        cout << arr[top] << endl;
    }
    bool empty()
    {
        return (top == -1);
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout << st.empty()<<endl;
    st.Top();
    st.display();

    return 0;
}