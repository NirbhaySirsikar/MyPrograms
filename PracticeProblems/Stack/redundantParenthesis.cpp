#include <bits/stdc++.h>
using namespace std;

void display(stack<char> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

bool redundant(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        display(st);
        cout<<"ele: "<<s[i]<<endl;
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                return false;
            }
            else
            {
                while (st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
    }
    return true;
}

int main()
{
    cout << redundant("((a+b)(c-b)/z)");
    return 0;
}