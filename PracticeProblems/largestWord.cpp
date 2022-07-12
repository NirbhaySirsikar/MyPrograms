#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int maxlen = 0, curlen = 0;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int start;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
                start=i-maxlen +1;
            }
            curlen = 0;
        }
        curlen++;
    }
    cout<<maxlen<<endl;
    cout<<start<<endl;
    for (int i = start; i < start+maxlen+2; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
