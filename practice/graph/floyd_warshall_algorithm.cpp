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
    vvi graph={
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0}
    };
    int n=graph.size();
    vvi dist=graph;
    rep(k,0,n){
        rep(i,0,n){
            rep(j,0,n){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    rep(i,0,n){
        rep(j,0,n){
            if(dist[i][j]==INF){
                cout<<"INF"<<" ";
            }else cout<<dist[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}