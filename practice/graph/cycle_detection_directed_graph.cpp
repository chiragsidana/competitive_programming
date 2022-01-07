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
bool iscycle( int src,vvi &adj,vector<bool> &visited,vi &stack ){
    stack[src]=true;
    if(!visited[src]){
        visited[src]=true;
        for(auto i: adj[src]){
            if(!visited[i] and iscycle(i,adj,visited,stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
    stack[src]=false;
    return false;
}
int main()
{int n,m;cin>>n>>m;
vvi adj(n);
rep(i,0,m){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
}
bool cycle=false;
vi stack(n,0);
vector<bool> visited(n,0);
rep(i,0,n){
    if(!visited[i] and iscycle(i,adj,visited,stack)){
        cycle=true;
    }
}
if(cycle){
    cout<<" cycle present";
}else cout<<"cycle not present";


    return 0;
}