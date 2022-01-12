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
const int INF=1e9;
int main()
{
    int n,m;cin>>n>>m;
    vvi edges;
    rep(i,0,m){
        int u,v,w;cin>>u>>v>>w;
        edges.push_back({u,v,w});

    }
    int src;cin>>src;
    vi dist(n,INF);
    dist[src]=0;
    rep(i,0,n-1){
        bool change=false; //for negative cycle 
        
        for(auto e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            if(dist[v]>w+dist[u])
            change=true; //cycle present
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }
    return 0;
}