#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
// #define first ff
// #define second ss

int main()
{
    vi arr={1,2,1,3,2,1};
    map<int,int>m;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}