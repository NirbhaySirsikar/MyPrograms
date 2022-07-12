#include <bits/stdc++.h>

using namespace std;

// vector<int> transpose(int arr[][] , int n)
// {
    
//     return arr;
// }

int main()
{
    int inp[100][100];
    int out[100][100];
    int temp;
    int n;
    cout << "Enter the number of columns: ";
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> inp[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << inp[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            out[i][j]=inp[j][i];
        }
    }
    
    cout << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << out[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}