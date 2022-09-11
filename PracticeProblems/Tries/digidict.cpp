#include<bits/stdc++.h>
using namespace std;

class Trie{
    public:
    class node{
        public:
        bool end;
        node*next[26];
        node(){
            end=false;
            for (int i = 0; i < 26; i++)
            {
                next[i]=NULL;
            }
            
        }
    };
    node * trie;
    Trie(){
        trie=new node();
    }
    void insert(string word){
        int i=0;
        node*it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                it->next[word[i]-'a']=new node();
            }
            it=it->next[word[i]-'a'];
            i++;
        }
        it->end=true;
    }
    void search(string word){
        int i=0;
        node* it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                insert(word);
                return;

            }
            it=it->next[word[i]-'a'];
            i++;
        }
        vector<string>res;
        printall(it,word,res,"");
        for(auto c:res){
            cout<<word<<c<<endl;
        }
    }
    void printall(node*it,string &s,vector<string>&res,string cur){
        if(it==NULL){
            return;
        }
        if(it->end){
            res.push_back(cur);
        }
        for (int i = 0; i < 26; i++)
        {
            if(it->next[i]){
                printall(it->next[i],s,res,cur+char('a'+1));
            }
        }
        
    }
};

int main(){
    Trie t;
    int n;cin>>n;
    vector<string> a(n);
    for(auto i:a){
        cin>>i;
        t.insert(i);
    }int q;cin>>q;
    while(q--){
        string s;cin>>s;
        t.search(s);
    }
    return 0;
}
