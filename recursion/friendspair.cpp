#include<bits/stdc++.h>
using namespace std;

int friends(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return (friends(n-1)+(n-1)*friends(n-2));
}

int main(){
    cout<<friends(4);
    return 0;
}
/*
    friends=1
        1
    friends=2
        1           1   }   friends 1 + 1
                    2   }}  friends 1 + 2
    friends=3
        1 1         1   }   friends 2 + 1
        2           1   }   
        1           2   }}  friends 1 + 2
    friends=4
        1 1 1       1   }
        1 2         1   }   friends 3 + 1
        2 1         1   }
        1 1         2   }}  friends 1 + 2
        2           2   }}  
    friends=5
        1 1 1 1     1
        1 2 1       1
        2 1 1       1
        1 1 2       1
        2 2         1
        1 1 1       2
        1 2         2
        2 1         2
*/