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
// int ans(vi &a,int n){
// vi dp(n,1);
//     int ans=0;
//     rep(i,1,n){
//         rep(j,0,i){
//             if(a[i]>=a[j])
//             dp[i]=max(dp[i],1+dp[j]);
//         }
//         ans=max(ans,dp[i]);
//     }
//     return ans;
// }
// int lis(vector<int> const& a) {
//     int n = a.size();
//     const int INF = 1e9;
//     vector<int> d(n+1, INF);
//     d[0] = -INF;

//     for (int i = 0; i < n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (d[j-1] < a[i] && a[i] < d[j])
//                 d[j] = a[i];
//         }
//     }

//     int ans = 0;
//     for (int i = 0; i <= n; i++) {
//         if (d[i] < INF)
//             ans = i;
//     }
//     return ans;
// }
int lis(vi &a){
    multiset<int> m;
    multiset<int> ::iterator it;
    int n=a.size();
    rep(i,0,n){
        m.insert(a[i]);
        it=m.upper_bound(a[i]);
        if(it!=m.end()){
            m.erase(it);
        }
    }
    return m.size();
}
void solve()
{
    int n,m;cin>>n>>m;
    vi a(n),b(m);
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,m){
        cin>>b[i];
    }
    cout<<lis(a)+lis(b)<<endl;
    
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