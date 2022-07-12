#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e3;
int main()
{
    char arr[5][5];
    vector<bool> vis(N);
    string key = "";
    cout << "Enter your key: " << endl;
    cin >> key;
    int k = 0;
    int alpha = 0;
    string alphabets = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (k < key.length())
            {
                if(key[k]=='J'){
                    vis['I']=true;
                }
                int n = key[k];
                while(vis[n])
                {
                    k++;
                    n=key[k];
                }
                    vis[n] = true;
                    arr[i][j] = key[k];
                    k++;
            }
            else
            {
                int a = alphabets[alpha];
                while (vis[a])
                {
                    alpha++;
                    a = alphabets[alpha];
                }
                vis[a]=true;
                arr[i][j] = alphabets[alpha];
                alpha++;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}