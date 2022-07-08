#include<bits/stdc++.h>
using namespace std;

void towerofHanoi(int n,char src, char des, char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,des);
    cout<<"Move "<<src<<" to "<<des<<endl;
    towerofHanoi(n-1,helper,des,src);
}

int main(){
    towerofHanoi(3,'A','C','B');
    return 0;
}