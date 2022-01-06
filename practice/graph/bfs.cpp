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
int main()
{
  rep(i,0,N){
      vis[i]=0;
  }
  int n,m;
  cin>>n>>m;
  int x,y;
  rep(i,0,m){
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);

  }
  queue<int> q;
  q.push(1);
  vis[1]=true;
  while(!q.empty()){
      int node=q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
  }
    return 0;
}