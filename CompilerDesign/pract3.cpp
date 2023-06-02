#include <bits/stdc++.h>
using namespace std;

int main()
{
    string user = "Panth";
    string pass = "011";
    string a;
    string b;
    cout<< "Username: ";
    cin >> a;
    cout<<"\nPassword: ";
    cin>>b;
    if(a==user and b==pass) cout<<"Correct Credentials";
    else cout<<"Incorrect Credentials";
    return 0;
}