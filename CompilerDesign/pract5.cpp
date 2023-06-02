#include <bits/stdc++.h>
using namespace std;

int i = 0;
string s = "i+i$";
void E()
{
    if (s[i] == 'i')
    {
        i++;
        EP();
    }
}
void EP()
{
    if (s[i] == '+')
    {
        i++;
        if (s[i] == 'i')
        {
            i++;
        }
        EP();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // E -> i E'
    // E -> +i E'| $
    E();
    if (s[i] == '$')
    {
        cout << "ACCEPTED\n";
    }
    else
    {
        cout << "ERROR\n";
    }
    return 0;
}