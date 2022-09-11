#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    priority_queue<int,vi,greater<int>>pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(1);
    pq.pop();
    cout<<pq.top();
    return 0;
}