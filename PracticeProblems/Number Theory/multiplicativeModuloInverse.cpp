#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
//ax + by = gcd(a,b);
struct triplet{
    public:
    int x;
    int y;
    int gcd;
};

// x=y1;
// y=x1-(a/b)*y1;
triplet extendedEuclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }
    triplet smallAns=extendedEuclid(b,a%b);
    triplet ans;
    ans.gcd=smallAns.gcd;
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;
    return ans;
}
int multiModInv(int a, int m){
    triplet temp =extendedEuclid(a,m);
    return temp.x;
}
int main(){
    int a,m;
    cin>>a>>m;
    int ans=multiModInv(a,m);
    ans<0?cout<<m+ans:cout<<ans;
    return 0;
}