#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int val)
    {
        s1.push(val);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }
    bool empty() { return (s1.empty() && s2.empty()) ? true : false; }
};

class NewQueue{
    stack<int> st;
    public:
    void push(int v){
        st.push(v);
    }
    int pop(){
        if(st.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int v= st.top();
        st.pop();
        if(st.empty()){
            return v;
        }
        int item = pop();
        st.push(v);
        return item;
    }
    bool empty() { return (st.empty()) ? true : false; }
};

int main()
{
    NewQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.empty();

    return 0;
}