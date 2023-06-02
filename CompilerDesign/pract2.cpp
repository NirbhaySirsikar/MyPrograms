#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int d(0), v(0), sy(0);
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            d++;
        else if (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' or s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            v++;
        }
        else if (s[i] == ';' or s[i] == ':' or s[i] == '{' or s[i] == '}' or s[i] == '(' or s[i] == ')' or s[i] == '[' or s[i] == ']')
            sy++;
    }
    cout << "digits: " << d << endl;
    cout << "vowels: " << v << endl;
    cout << "symbols: " << sy << endl;
    return 0;
}
