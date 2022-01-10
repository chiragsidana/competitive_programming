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
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
vector<bool> vis;
    int n,m;
    vvi adj;
    vi components;
int get_comp(int idx){
    if(vis[idx])
    return 0;
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx]){
        ans+=get_comp(i);
        vis[i]=true;
    }
    return ans;

}
int main()
{
    cin>>n>>m;
    adj=vvi(n);
    vis=vb(n,0);
    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    rep(i,0,n){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    for(auto i:components){
        cout<<i<<" ";
    }
    return 0;
}