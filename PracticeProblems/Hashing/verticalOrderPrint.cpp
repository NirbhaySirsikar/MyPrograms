#include<bits/stdc++.h>
#include"..\Binary Tree\BinaryTree.cpp"

using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

void getOrder(node*root,int hdis,map<int,vi>&m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->data);
    getOrder(root->left,hdis-1,m);
    getOrder(root->right,hdis+1,m);
    return;
}

int main(){
    node *root=bintree({10,7,4,3,11,14,6});
    int hdis=0;
    map<int,vi> m;
    getOrder(root,hdis,m);
    map<int,vi> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for (int i = 0; i < it->ss.size(); i++)
        {
            cout<<it->ss[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}