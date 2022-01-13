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
int main()
{
    int ladders,snakes;
    cin>> ladders;
    map<int,int> lad;
    map<int,int>snak;
    rep(i,0,ladders){
        int u,v;cin>>u>>v;
        lad[u]=v;
    }
    cin>>snakes;
    rep(i,0,snakes){
        int u,v;cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int> q;
    q.push(1);
    bool found=false;
    vi vis(101,0);
    vis[1]=true;
    while(!q.empty() and !found){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            rep(die,1,7){
                if(t+die==100){
                    found=true;
                }
                if(t+die<=100 and lad[t+die] and !vis[lad[t+die]]){
                    vis[lad[t+die]]=true;
                    if(lad[t+die]==100){
                        found=true;
                    }
                    q.push(lad[t+die]);
                }
                else if(t+die<=100 and snak[t+die] and !vis[snak[t+die]]){
                    vis[snak[t+die]]=true;
                    if(snak[t+die]==100){
                        found=true;
                    }
                    q.push(snak[t+die]);
                }
                else if(t+die<=100 and !vis[t+die] and !snak[t+die] and !lad[t+die]){
                    vis[t+die]=true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    if(found){
        cout<<moves;
    }else cout<<-1;
    return 0;
}