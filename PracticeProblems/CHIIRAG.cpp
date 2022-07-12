#include<bits/stdc++.h>
using namespace std;

//        0   1   2        //       0   1   2
                                  
// 0      1   2   3        // 0     1   2   3
// 1      4   5   6        // 1     4   5   6
// 2      7   8   9        // 2     7   8   9



int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    



    return 0;
}