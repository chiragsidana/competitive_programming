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
vvi adj;
vb vis;
vi col;
bool bipart;
void color(int u,int curr){
    if(col[u]!=-1 and col[u]!=curr){
        bipart=false;
        return;
    }
    col[u]=curr;
    if(vis[u]){
        return;
    }
    vis[u]=true;
    for(auto i:adj[u]){
        color(i, curr xor 1);
    }
}
int main()
{
    bipart=true;
int n,m;
cin>>n>>m;
adj=vvi (n);
vis=vb(n,false);
col=vi(n,-1);
rep(i,0,m){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

}
rep(i,0,n){
    if(!vis[i]){
        color(i,0);
    }
}
if(bipart)
cout<<"graph is bipart";
else cout<<"graph is not bipart";
    return 0;
}