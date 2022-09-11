#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<char>> matrix(26, vector<char>(26, 'A'));
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            matrix[i][j] += (i + j) % 26;
        }
    }
    cout << "Enter your Plain text: ";
    string pt = "";
    cin >> pt;
    cout << "Enter your Key: ";
    string key = "";
    cin >> key;
    string ct = pt;
    for (int i = 0; i < pt.size(); i++)
    {
        // ct[i]+=((pt[i]-'A')+key[i%key.size()])%26;
        ct[i] = matrix[key[i % key.size()] - 'A'][pt[i] - 'A'];
    }

    cout << "Your cipher text is:" << ct;
    return 0;
}