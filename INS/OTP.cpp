#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, mod = 1e9 + 7;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string pt;
    cin >> pt;
    string key = pt;
    int n = pt.length();
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        key[i] = alpha[rand() % 26];
    }
    cout << "Key: " << key << "\n";

    string ptBin = "";
    for (int i = 0; i < n; i++)
    {
        ptBin += bitset<8>(pt[i]).to_string();
    }
    // cout<<ptBin<<"\n";

    string keyBin = "";
    for (int i = 0; i < n; i++)
    {
        keyBin += bitset<8>(key[i]).to_string();
    }
    // cout<<keyBin<<"\n";

    string ct = "";
    for (int i = 0; i < n * 8; i++)
    {
        ct += ((ptBin[i] - '0') xor (keyBin[i] - '0')) + '0';
    }
    // cout<<ct<<"\n";

    string output = "";
    stringstream sstream(ct);
    while (sstream.good())
    {
        bitset<8> bits;
        sstream >> bits;
        char c = char(bits.to_ulong());
        output += c;
        // cout<<c<<" ";
    }
    cout << "ct generated\n";

    string rMsg = "";
    for (int i = 0; i < n * 8; i++)
    {
        rMsg += ((ct[i] - '0') xor (keyBin[i] - '0')) + '0';
    }
    // cout<<rMsg<<"\n";

    string Msg = "";
    stringstream ssstream(rMsg);
    while (ssstream.good())
    {
        bitset<8> bits;
        ssstream >> bits;
        char c = char(bits.to_ulong());
        Msg += c;
        // cout<<c<<" ";
    }
    // cout<<Msg<<"\n";
    cout << "Message: " << Msg << "\n";

    return 0;
}