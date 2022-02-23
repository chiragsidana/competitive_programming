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
    int n,x;cin>>n>>x;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    map<int,int> mp;
    rep(i,0,n){
        mp[a[i]]++;
    }
   for(auto it:mp){
       mp[it.ff]-=min(it.ss,mp[it.ff*x]);
        mp[it.ff*x]-=min(it.ss,mp[it.ff*x]);
    }
    int ans=0;
    for(auto it:mp){
        ans+=it.ss;
    }
    cout<<ans<<endl;

}
signed main()
{
    FastIO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}