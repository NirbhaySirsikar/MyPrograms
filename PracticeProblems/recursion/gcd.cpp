#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    cout<<gcd(24,42);
    return 0;
}