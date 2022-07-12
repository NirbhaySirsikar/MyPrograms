#include <bits/stdc++.h>
using namespace std;

bool balancedParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
            cout << "\t^pushed" << endl;
        }
        else if (s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() || s[i] == ')' && st.top())
        {

            st.pop();
            cout << "\t^popped" << endl;
        }
        else
        {
            return false;
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    cout << balancedParenthesis("{[()]}");
    return 0;
}