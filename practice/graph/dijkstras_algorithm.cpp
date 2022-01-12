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
const int inf=1e7;
int main()
{
    int n,m;cin>>n>>m;
    vi dist(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    rep(i,0,m){
        int u,v,w;cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int source;cin>>source;
    dist[source]=0;
    set<pair<int,int>>s;
    //{wt,vertex}
    s.insert({0,source});
    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        for(auto it: graph[x.second]){
            if(dist[it.first]>dist[x.second]+it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    rep(i,1,n+1){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else cout<<-1<<" ";
    }
    return 0;
}