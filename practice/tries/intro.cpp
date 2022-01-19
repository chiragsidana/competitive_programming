#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
const int N=1e3+2;
class Trie{
    public:
    class node{
     public:
        bool end;
        node* next[26];
        node(){
            end=false;
            rep(i,0,26){
                next[i]=NULL;
            }
        }
    };
    node* trie;
    Trie(){
        trie=new node();
    }
    void insert(string word){
        int i=0;
        node* it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
                it->next[word[i]-'a']==new node();
            it=it->next[word[i]-'a'];
            i++;
        }
       it->end=true;
    }
    bool search(string word){
        int i=0;
        node* it=trie;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
            return false;
            it =it->next[word[i]-'a'];
            i++;
        }
        return it->end;
    }
};
int main()
{
    Trie *myTrie=new Trie();
    vector<string> words={"ayush","daasi"};
    for(auto w:words){
        myTrie->insert(w);
    }
    if(myTrie->search("ayush")){
        cout<<"Madhav found\n";
    }
    else cout<<"Madhav dont exist";
    
    return 0;
}