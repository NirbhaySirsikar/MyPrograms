#include <bits/stdc++.h>
using namespace std;

int RomanVal(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else if (c == 'M')
    {
        return 1000;
    }
    else
    {
        return -1;
    }
}
int romanToInt(string s)
{
    int final = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int c = RomanVal(s[i]);
        if (i + 1 < s.length())
        {
            int n = RomanVal(s[i + 1]);
            if (n > c)
            {
                final -= c;
            }
            else
            {
                final += c;
            }
        }
        else
            final += c;
    }
    return final;
}

int main()
{
    string s = "";
    // cout << "enter the roman number: ";
    // cin >> s;
    // cout<<s;
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}