#include <bits/stdc++.h>
using namespace std;

void token(string s)
{
    if (s == "int" or s == "float" or s == "double" or s == "void" or s == "if" or s == "else" or s == "while" or s == "do")
    {
        cout << "keyword";
    }
    else if (s == "+" or s == "=" or s == "-" or s == "/" or s=="*")
    {
        cout << "operator";
    }
    else if (!s.empty() && find_if(s.begin(), s.end(), [](unsigned char c)
                                   { return !isdigit(c); }) == s.end())
    {
        cout << "constant";
    }
    else if (s == "{" or s == "}" or s == ";" or s == "[" or s == "]" or s == "(" or s == ")")
    {
        cout << "special character";
    }
    else if(isdigit(s[0]) or s[0] == '+' or s[0] == '=' or s[0] == '-' or s[0] == '/' or s[0]=='*')
    {
        cout << "invalid identifier";
    }else cout<<"identifier";
}

int main()
{
    // string s = "int a = b + c * 100 / 5op ;";
    string s = "int a = b + 1c float ; ";
    vector<string> words;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    if (temp != "")
        words.push_back(temp);
    int n=words.size();
    for (int i=0;i<n;i++)
    {
        cout << words[i] << "\t";
        token(words[i]);
        cout << "\n";
    }
    return 0;
}