#include<bits/stdc++.h>
using namespace std;

int main(){
   int a[]={1,1,0,0,1,0,0,1,1,1,1};
   int n=11,k=2,zeroCount=0,i=0,ans=0;
   for (int j = 0; j < n; j++)
   {
       if(a[j]==0){
           zeroCount++;
       }
       while(zeroCount>k){
           if(a[i]==0){
               zeroCount--;
           }
           i++;
       }
       ans=max(ans,j-i+1);  
       
   cout<<i<<" "<<j<<" "<<ans<<endl;
   }
   return 0;
}