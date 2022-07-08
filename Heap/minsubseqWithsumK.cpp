#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define first ff
#define second ss

int main()
{
    int arr[] = {1, 1, 3, 2, 8};
    int k = 12;
    int sum = 0, count = 0;
    priority_queue<int, vi> pq;

    rep(i, 0, 5) pq.push(arr[i]);
    while (!pq.empty())
    {
        sum+=pq.top();
        pq.pop();
        count++;
        if(sum>=k){
            break;
        }
    }
    if(sum<k){
        cout<<"-1"<<endl;
    }
    else{
        cout<<count<<endl;
    }

    return 0;
}