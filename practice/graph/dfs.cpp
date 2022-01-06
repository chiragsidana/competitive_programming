#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
const int N=1e5+2;
    bool vis[N];
    vi adj[N];
void dfs(int node){
vis[node]=1;
cout<<node<<" ";
vi :: iterator it;
for(it=adj[node].begin();it!=adj[node].end();it++){
   if(vis[*it]);
   else{
       dfs(*it);
   } 
}

}    
int main()
{
    int n,m;
    cin>>n>>m;
    rep(i,0,n+1){
        vis[i]=false;
    }
    int x,y;
    rep(i,0,m){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}