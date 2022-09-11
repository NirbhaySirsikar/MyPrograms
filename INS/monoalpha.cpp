#include<bits/stdc++.h>
using namespace std;
int main(){
     cout << "Enter your Plain text: ";
    string pt = "";
    cin >> pt;
    char arr[]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    string ct=pt;
    for (int i = 0; i < pt.length(); i++)
    {
        ct[i]=arr[pt[i]-'A'];
    }
    cout<<ct<<endl;
    return 0;
}