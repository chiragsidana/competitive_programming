#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
bool iscycle(int src,vvi &adj,vector<bool> &visited,int parent){
    visited[src]=true;
    for(auto i: adj[src]){
        if(i!=parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] and iscycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m;cin>>n>>m;
    vvi adj(n);
    rep(i,0,m){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle=false;
    vector<bool> visited(n,false);
    rep(i,0,n){
        if(!visited[i] and iscycle(i,adj,visited,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"cycle present";
    }else cout<<"cycle not present";
    return 0;
}