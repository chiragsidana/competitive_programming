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
class node{
public:
    node* next[26];
    bool end;
    node(){
        rep(i,0,26){
            next[i]=NULL;

        }
        end=false;
    }
};
class Trie{
    private:
    node*root;
    public:
    Trie(){
        root=new node();
    }
    void insert(string &s){
        node*it=root;
        for(auto c:s){
            if(it->next[c-'a'])
                it->next[c-'a']=new node();
            it=it->next[c-'a'];
        }
        it->end=true;
    }
    void find(string &s){
        node* it=root;
        for(auto c:s){
            if(it->next[c-'a']){
                cout<<"no suggestion"<<endl;
                insert(s);
                return;
            }
            it=it->next[c-'a'];
        }
        vector<string> res;
        printall(it,s,res,"");
        for(auto c:res){
            cout<<s<<c<<endl;
        }
    }
    void printall(node* it,string &s,vector<string>&res,string cur ){
        if(it==NULL)
        return;
        if(it->end){
            res.push_back(cur);
        }
        for(int i=0;i<26;i++){
            if(it->next[i]){
                printall(it->next[i],s,res,cur+char('a'+i));
            }
        }
    }
};
int main()
{
    Trie t;
    int n;cin>>n;
    vector<string> a(n);
    for(auto &i:a){
        cin>>i;
        t.insert(i);
    }
    int q;cin>>q;
    while(q--){
        string s;
        cin>>s;
        t.find(s);
    }

    return 0;
}