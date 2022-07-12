#include <bits/stdc++.h>
using namespace std;
void display(stack<int> st)
{
    cout << "Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int get_max_area(vector<int> a)
{
    int n = a.size(), ans = 0, i = 0;
    stack<int> st;
    a.push_back(0);
    while (i < n)
    {
        display(st);
        while (!st.empty() and a[st.top()] > a[i])
        {

            int t = st.top();
            int h = a[t];
            st.pop();
            if (st.empty())
            {
                // cout<<"Empty h="<<h<<" l="<<i<<endl;
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                // cout<<"pop h="<<h<<" l="<<len<<endl;
                ans = max(ans, h * len);
            }
            cout << "ans: " << ans << endl;
        }
        st.push(i);
        cout << "i: " << i << endl;
        i++;
    }
    while (!st.empty())
    {

        int t = st.top();
        int h = a[t];
        st.pop();
        if (st.empty())
        {
            // cout<<"Empty h="<<h<<" l="<<i<<endl;
            ans = max(ans, h * i);
        }
        else
        {
            int len = i - st.top() - 1;
            // cout<<"pop h="<<h<<" l="<<len<<endl;
            ans = max(ans, h * len);
        }
        cout << "ans: " << ans << endl;
    }
    return ans;
}

int main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3, 6, 7};
    cout << get_max_area(a);
    return 0;
}