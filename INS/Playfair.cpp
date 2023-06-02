// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define pii pair<int, int>
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ff first
// #define ss second
// const int N = 1e3;
// int main()
// {
//     char arr[5][5];
//     vector<bool> vis(N);
//     string key = "";
//     cout << "Enter your key: " << endl;
//     cin >> key;
//     int k = 0;
//     int alpha = 0;
//     string alphabets = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (k < key.length())
//             {
//                 if(key[k]=='J'){
//                     vis['I']=true;
//                 }
//                 int n = key[k];
//                 while(vis[n])
//                 {
//                     k++;
//                     n=key[k];
//                 }
//                     vis[n] = true;
//                     arr[i][j] = key[k];
//                     k++;
//             }
//             else
//             {
//                 int a = alphabets[alpha];
//                 while (vis[a])
//                 {
//                     alpha++;
//                     a = alphabets[alpha];
//                 }
//                 vis[a]=true;
//                 arr[i][j] = alphabets[alpha];
//                 alpha++;
//             }
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
 
void get_pos(char, int&, int&);
void same_row(int, vector<char>&, int, int);
void same_column(int, vector<char>&, int, int);
void diff_col_row(int, int, vector<char>&, int, int);
void encode(vector<char>, int);
void get_input(vector<char>&);
void convert_string(vector<char>&, vector<char>&);
 
const char encoder[5][5]={{'A','B','C','D','E'},
                      {'F','G','H','I','K'},
                      {'L','M','N','O','P'},
                      {'Q','R','S','T','U'},
                      {'V','W','X','Y','Z'}};
 
void get_pos(char p, int& r, int& c)
{
    if (p < 'J')
    {
        r = (p - 65) / 5;
        c = (p - 65) % 5;
    }
    else if (p > 'J')
    {
        r = (p - 66) / 5;
        c = (p - 66) % 5;
    }
    return;
}
 
void same_row(int r, vector<char>& code, int c1, int c2)
{
    code.push_back(encoder[r][(c1 + 1) % 5]);
    code.push_back(encoder[r][(c2 + 1) % 5]);
    return;
}
 
void same_column(int c, vector<char>& code, int r1, int r2)
{
    code.push_back(encoder[(r1 + 1) % 5][c]);
    code.push_back(encoder[(r2 + 1) % 5][c]);
    return;
}
 
void diff_col_row(int r1, int c1, vector<char>& code, int r2, int c2)
{
    code.push_back(encoder[r1][c2]);
    code.push_back(encoder[r2][c1]);
    return;
}
 
void encode(vector<char> msgx, int len)
{
    vector<char> code;
    int i = 0, j = 0;
    int r1, c1, r2, c2;
    while (i < len)
    {
        get_pos(msgx[i], r1, c1);
        i++;
        get_pos(msgx[i], r2, c2);
        if (r1 == r2)
        {
            same_row(r1, code, c1, c2);
        }
        else if (c1 == c2)
        {
            same_column(c1, code, r1, r2);
        }
        else
        {
            diff_col_row(r1, c1, code, r2, c2);
        }
        i++;
    }
    cout<<"\nCODE: ";
    for (j = 0;j < code.size();j++)
    {
        cout<<code[j];
    }
    return;
}
 
void get_input(vector<char>& a)
{
    char c;
    while (1)
    {
        c = getchar();
        if (c >= 97 && c <= 122)
        c-=32;
        if (c == '\n')
            break;
        else if (c==' ')
            continue;
        else if (c == 'J')
        a.push_back('I');
        a.push_back(c);
    }
    return;
}
 
void convert_string(vector<char>& msg, vector<char>& msgx)
{
    int i, j;
    i = j = 0;
    while (i < msg.size())
    {
        msgx.push_back(msg[i]);
        i++;
        if (i == msg.size())
        {
            msgx.push_back('X');
            break;
        }
        if (msg[i] == msgx[j])
        {
            msgx.push_back('X');
            j++;
        }
        else if(msg[i] != msgx[j])
        {
            j++;
            msgx.push_back(msg[i]);
            i+= 1;
        }
        j++;
    }
}
 
int main()
{
    vector<char> msg;
    vector<char> msgx;
    int i, j;
    cout<<"Enter Message to Encrypt:";
    get_input(msg);
    convert_string(msg, msgx);
    int len = msgx.size();
    encode(msgx, len);
 
    return 0;
}