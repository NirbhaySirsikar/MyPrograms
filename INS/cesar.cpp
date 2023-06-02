#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

string caser(string pt, int key)
{
    for (int i = 0; i < pt.size(); i++)
    {
        int n=pt[i]-'A'+key;
        pt[i]='A'+(n)%26;
        // pt[i]='A'+(pt[i]-'A'+key)%26;
        // if (pt[i] + key > 90)
        // {
        //     pt[i] = pt[i] - 26 + key;
        // }
        // else
        //     pt[i] += key;
    }
    return pt;
}

string caser_dec(string ct, int key)
{
    for (int i = 0; i < ct.size(); i++)
    {
        int n=ct[i]-'A'-key;
        ct[i]='A'+(n)%26;
    }
    return ct;
}

int main()
{
    cout<<"Enter 1 for encryption and 0 for decryption: ";
    int t;
    cin >> t;
    if (t)
    {

        cout<<"Enter your plain text: ";
        string pt;
        cin >> pt;
        cout<<"Enter your key: ";
        int key;
        cin >> key;
        string ct = caser(pt, key);
        cout<<"Cypher Text: ";
        cout << ct;
    }
    else
    {
        cout<<"Enter your cypher text: ";
        string ct;
        cin >> ct;
        cout<<"Enter your key: ";
        int key;
        cin >> key;
        string plaint = caser_dec(ct, key);
        cout<<"Plain Text: ";
        cout << plaint;
    }
    return 0;
}