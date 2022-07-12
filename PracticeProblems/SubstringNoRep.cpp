//longest Substring with no repititions
#include<bits/stdc++.h>
using namespace std;

int main(){
   string s="pwwpwyuikw";
   vector<int> dict(256,-1);
   int maxlen=0,start=-1;
   for (int i = 0; i < s.length(); i++)
   {
       if(dict[s[i]]>start){
           start=dict[s[i]];
       }
       dict[s[i]]=i;
       maxlen=max(maxlen,i-start);
   }
   cout<<maxlen;
   
   return 0;
}