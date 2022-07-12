#include<bits/stdc++.h>
using namespace std;

void ThreeSum(vector<int> arr,int target){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++)
    {
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int curr=arr[lo]+arr[hi]+arr[i];
            if(curr==target){
                cout<<"True! Bhai sach me!!!!!"<<endl;
                cout<<"Ye dekh: "<<arr[i]<<" "<<arr[lo]<<" "<<arr[hi]<<endl;
                return;
            }if(curr<target){
                lo++;
            }else{

                hi--;
            }

        }
    }
    cout<<"False Unfortunatly, Ye humse na ho payega.... :("<<endl;
}

int main(){
    vector<int> a={1,3,6,9,35,25};
    ThreeSum(a,13);
    return 0;
}