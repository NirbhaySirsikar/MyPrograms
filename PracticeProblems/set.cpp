#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    // descendingset
    set<int, greater<int>> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(3);
    s1.insert(5);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // lower bound upper bound
    cout << *s.lower_bound(2) << endl;
    cout << *s.lower_bound(3) << endl;
    cout << *s.upper_bound(3) << endl;
    cout << (s.upper_bound(5) == s.end()) << endl;

    s1.erase(3);
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    // multiset
    multiset<int> s2;
    s2.insert(1);
    s2.insert(3);
    s2.insert(3);
    s2.insert(3);
    s2.insert(3);
    s2.insert(5);
    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;
    s2.erase(s2.find(3));
    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;
    s2.erase(3);
    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;

    // unorered_set
    unordered_set<int> s3;
    s3.insert(1);
    s3.insert(3);
    s3.insert(3);
    s3.insert(3);
    s3.insert(3);
    s3.insert(5);
    for (auto i : s3)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}