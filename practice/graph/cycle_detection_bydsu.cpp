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

const int N=1e5+6;
vi parent(N);
vi sz(N);

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v])
    return v;
    return parent[v]=find_set(parent[v]);
    
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b])
        swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int main()
{
    rep(i,0,N){
        make_set(i);
    }
    int n,m;cin>>n>>m;
    vvi edges;
    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
    bool cycle=false;
    for(auto i:edges){
        int u=i[0];
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);
         if(x==y){
        cycle=true;
    }
    else{
        union_sets(u,v);
    }
    }
   
    if(cycle){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle does not contain cycle";
    }
    return 0;
}