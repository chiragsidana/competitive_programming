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
int int_size=32;
class node{
    public:
        node* next[2];
        node(){
            rep(i,0,2){
                next[i]=NULL;
            }
        }

};
node* trie;
void insert(int num){
    node* it=trie;
    for(int i=int_size-1;i>=0;i--){
        int curr_bit=(num>>i)&1;
        if(!it->next[curr_bit])
            it->next[curr_bit]=new node();
        it=it->next[curr_bit];
    }
}
int query(int num){
    node* it=trie;
    int ans=0;
    for(int i=int_size-1;i>=0;i--){
        int cur_bit=(num>>i)&1;
        int opposite=cur_bit xor 1;
        if(it->next[opposite]){
            it=it->next[opposite];
            ans|=1<<i;
        }
        else{
            it=it->next[opposite xor 1];
        }
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    trie=new node();
    insert(0);
    vi rmax(n+1,0);
    int R=0;
    for(int i=n-1;i>=0;i--){
        if(i!=n-1){
            rmax[i]=max(rmax[i+1],query(R));
            insert(R);
        }
        else{
            rmax[i]=query(R);
            insert(R);
        }
    }
    free(trie);
    trie=new node();
    insert(0);
    int ans=0;
    int L=0;
    rep(i,0,n){
        L=L xor a[i];
        ans=max(ans,rmax[i+1]+query(L));
        insert(L);
    }
    cout<<ans;
    return 0;
}