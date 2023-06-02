// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define pii pair<int, int>
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ff first
// #define ss second
// const int N = 1e5 + 7, mod = 1e9 + 7;

// int main()
// {
//     // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     int n, p, q;
//     cin >> n;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             p = i;
//             q = n / i;
//         }
//     }
//     cout << "p=" << p << " q=" << q << "\n";

//     int qn = (p - 1) * (q - 1);
//     vi earr;
//     for (int i = 0; i <= qn; i++)
//     {
//         if (__gcd(i, qn) == 1)
//         {
//             earr.push_back(i);
//             cout << earr.size() << " " << i << "\n";
//         }
//     }
//     int choice;
//     cin >> choice;
//     int e = earr[choice - 1];
//     cout << e;
//     return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {
   double p = 13;
   double q = 11;
   double n=p*q;
   double track;
   double phi= (p-1)*(q-1);
   double e=7;
   while(e<phi) {
      track = gcd(e,phi);
      if(track==1)
         break;
      else
         e++;
   }
   double d1=1/e;
   double d=fmod(d1,phi);
   double message = 9;
   double c = pow(message,e); 
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"Original Message = "<<message;
   cout<<"\n"<<"p = "<<p;
   cout<<"\n"<<"q = "<<q;
   cout<<"\n"<<"n = pq = "<<n;
   cout<<"\n"<<"phi = "<<phi;
   cout<<"\n"<<"e = "<<e;
   cout<<"\n"<<"d = "<<d;
   cout<<"\n"<<"Encrypted message = "<<c;
   cout<<"\n"<<"Decrypted message = "<<m;
   return 0;
}