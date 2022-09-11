#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int sum=0;
        for (int i = 0; i < n; i++) {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}
