#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    vi arr={2,8,-3,-5,2,-4,6,1,2,1,-3,4,-1,-3};
    // vi arr={1,-1,1,-1};
    map<int,int> count;
    int prefsum=0;
    int ans=0;
    count[0]=1;
    for (int i = 0; i < arr.size(); i++)
    {
        prefsum+=arr[i];
        ans+=count[prefsum];
        count[prefsum]++;
    }
    map<int,int> :: iterator it;
    // for(it=count.begin();it!=count.end();it++){
    //     ans+=(it->ss)-1;
    // }
    cout<<ans;
    return 0;
}