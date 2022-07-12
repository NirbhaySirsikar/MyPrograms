#include <bits/stdc++.h>
using namespace std;
void print(vector<int> ans){
   for (auto i : ans){
      cout<<i<<" ";  
   }cout<<endl;

}
void printq(deque<int> ans){
   for (auto i : ans){
      cout<<i<<" ";  
   }cout<<endl;

}
int main()
{
   int a[] = {3, 4, 9, 1, -4, 10};
   int k = 2, n = 6;
   deque<int> q;
   vector<int> ans;
   for (int i = 0; i < k; i++)
   {
      while (!q.empty() and a[q.back()] < a[i])
      {
         q.pop_back();
      }
      q.push_back(i);
   }
   ans.push_back(a[q.front()]);
   for (int i = k; i < n; i++)
   {
   // print(ans);
      if (q.front() == i - k)
      {
         q.pop_front();
      }
      while (!q.empty() and a[q.back()] < a[i])
      {
         q.pop_back();
      }
      q.push_back(i);
      ans.push_back(a[q.front()]);
   printq(q);
   }
   print(ans);
   return 0;
}