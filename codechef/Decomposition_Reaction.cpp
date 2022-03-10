#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
void solve()
{
    int n,m;cin>>n>>m;
    vi q(n+1);
    rep(i,0,n){
        cin>>q[i+1];
    }
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        rep(j,0,y){
            int a,b;
            cin>>a>>b;
            q[b]+=(q[x]*a);
            q[b]%=MOD;
        }
        q[x]=0;
    }
    for(int i=1;i<n+1;i++){
        cout<<q[i]<<endl;
    }
}
signed main()
{
    FastIO;
    
    solve();
    return 0;
}