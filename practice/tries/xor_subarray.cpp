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
class TrieNode{
    public:
    TrieNode *next[2];
    TrieNode(){
        next[0]=NULL;
        next[1]=NULL;
    }
};
TrieNode* buildtrie(vi &a){
    TrieNode* root=new TrieNode();
    int n=a.size();
    rep(i,0,n){
        int num=a[i];
        TrieNode* cur=new TrieNode();
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(cur->next[bit]==NULL)
                cur->next[bit]=new TrieNode();
            cur=cur->next[bit];
        }

    }
    return root;
}
int helper(TrieNode* root,vi &a){
    int res=0;
    rep(i,0,a.size()){
        int num=a[i];
        TrieNode*it=root;
        int curmax=0;
        for(int i=31;i>=0;i--){
            int bit=((num>>i)&1)?0:1;
            if(it->next[bit]){
                curmax<<=1;
                curmax|=1;
                it=it->next[bit];
            }
            else{
              curmax<<=1;
              curmax |=0;
              it=it->next[bit xor 1];


            }
        }
        res=max(res,curmax);
    }

}
int main()
{
    vi a={3,10,5,15,2};
    TrieNode* root=buildtrie(a);
    int ans=helper(root,a);
    cout<<ans;
    return 0;
}