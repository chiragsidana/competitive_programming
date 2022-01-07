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
int main()
{
    int n,m;cin>>n>>m;
    int cnt=0;
    vvi adj(n);
    vi indeg(n,0);
    rep(i,0,m){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    rep(i,0,n){
        if (indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it:adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }

        }
    }
    return 0;
}