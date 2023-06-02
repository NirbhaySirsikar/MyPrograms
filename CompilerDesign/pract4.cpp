#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> table;
map<string, vector<string>> first;
map<string, vector<string>> follow;
map<string, vector<string>>::iterator it;

vector<string> split(const string &str, const char &delimiter)
{
    vector<string> tokens;
    string token;
    istringstream token_stream(str);
    while (getline(token_stream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

void get_first(string symbol)
{
    if (first.count(symbol) > 0)
    {
        return;
    }
    for (auto production : table[symbol])
    {
        vector<string> prod = split(production, ' ');
        if (!isupper(prod[0][0]))
        {
            first[symbol].push_back(prod[0]);
        }
        else
        {
            get_first(prod[0]);
            for (auto s : first[prod[0]])
            {
                if (s != "ε")
                {
                    first[symbol].push_back(s);
                }
            }
        }
    }
}

void get_follow(string symbol)
{
    if (follow.count(symbol) > 0)
    {
        return;
    }
    for (auto production : table)
    {
        for (auto rhs : production.second)
        {
            vector<string> prod = split(rhs, ' ');
            auto it = find(prod.begin(), prod.end(), symbol);
            while (it != prod.end())
            {
                int i = it - prod.begin();
                string follow_symbol;
                if (i == prod.size() - 1)
                {
                    follow_symbol = production.first;
                }
                else
                {
                    follow_symbol = prod[i + 1];
                }
                if (follow.count(symbol) == 0)
                {
                    if (follow.count(follow_symbol) == 0)
                    {
                        get_follow(follow_symbol);
                    }
                    follow[symbol] = follow[follow_symbol];
                }
                else
                {
                    if (follow.count(follow_symbol) == 0)
                    {
                        get_follow(follow_symbol);
                    }
                    for (auto s : follow[follow_symbol])
                    {
                        follow[symbol].push_back(s);
                    }
                }
                it = find(prod.begin(), prod.end(), symbol);
            }
        }
    }
    if (follow.count(symbol) == 0)
    {
        follow[symbol] = vector<string>{"$"};
    }
}

bool is_terminal(string s)
{
    return !isupper(s[0]);
}

int main()
{
    int n, m;
    cin >> n;
    string lhs, rhs;

    for (int i = 0; i < n; i++)
    {
        cin >> lhs >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> rhs;
            table[lhs].push_back(rhs);
        }
    }

    for (auto production : table)
    {
        get_first(production.first);
    }

    for (auto production : table)
    {
        get_follow(production.first);
    }

    for (it = first.begin(); it != first.end(); it++)
    {
        cout << "First(" << it->first << ") = { ";
        for (auto s : it->second)
        {
            cout << s << " ";
        }
        cout << "}" << endl;
    }

    for (it = follow.begin(); it != follow.end(); it++)
    {
        cout << "Follow(" << it->first << ") = { ";
        for (auto s : it->second)
        {
            cout << s << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
