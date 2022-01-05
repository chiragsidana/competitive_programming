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
int main()
{
    int n,m;cin>>n>>m;
    int N=1e5+2;
    vi adj[N];
    vector<vi> adjm(n+1,vi(n+1,0));
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;

    }
    cout<<"adjancey matrix of above graph is given by:"<<endl;
    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl<<endl<<endl;
    cin>>n>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"adjancey list of above graph is given by:"<<endl;
    rep(i,1,n+1){
        cout<<i<<"->";
        for(int x:adj[i])
             cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}