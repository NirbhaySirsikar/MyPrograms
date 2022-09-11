#include <bits/stdc++.h>

using namespace std;

class sem3b1
{
public:
    int num;
    string name;
};

int main()
{
    int n;
    sem3b1 stud;
    cout << "Enter the numbeer of entries you want to make : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        strcat(stud, i);
    }

    return 0;
}
