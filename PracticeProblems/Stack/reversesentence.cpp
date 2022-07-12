#include <bits/stdc++.h>
using namespace std;

void reversesentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while (!s.empty())
    {
        cout << st.top()<<" ";
        st.pop();
    }
}

int main()
{
    string s = "Hello, how are you guys?";
    reversesentence(s);
    return 0;
}