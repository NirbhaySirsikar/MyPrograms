#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 0, 1, 0, 0, 1, 0, 0};
    int b[] = {1, 1, 0, 0, 1, 1, 0, 1};
    int c[7];
    int dist = 0;


    cout<<"S\tR"<<endl;
   for (int i = 0; i < 8; i++)
    {
        if (a[i] == b[i])
        {
            cout<<a[i]<<"\t"<<b[i]<<endl;
        }
        else
        {
            cout<<a[i]<<"\t"<<b[i]<<"\t CORRUPTED"<<endl;
        }
    }
    cout << "Sender's code:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Reciver's code:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == b[i])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        dist += c[i];
    }
    cout << "Hamming's distance:" << dist << endl;
    cout << endl;
    return 0;
}
