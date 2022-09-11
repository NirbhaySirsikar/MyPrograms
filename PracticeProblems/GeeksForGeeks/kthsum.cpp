//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
            int p=pivot(arr,l,r);
            if(p<k-1){return kthSmallest(arr,p+1,r,k);
            }
            else if(p>k-1){
                return kthSmallest(arr,l,p-1,k);
            }else 
                return arr[p];
    }
    // int pivot(int arr[],int l,int r){
    //     int x=arr[r];
    //     int i=l;
    //     for(int j=l;j<=r-1;j++){
    //         if(arr[j]<=x){
    //             swap(arr[i],arr[j]);
    //             i++;
    //         }
    //     }
    //     swap(arr[i],arr[r]);
    //     return i;
    // }
    int pivot(int arr[],int l,int r){
        int i=l,j=l,x=arr[r];;
        while(i<=r){
            if(arr[i]<=x){
                swap(arr[i],arr[j]);
                i++;j++;
            }else{
                i++;
            }
        }
        return j-1;
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends