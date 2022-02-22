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
    int n;
    cin>>n;
    vi ans;
    rep(i,0,n) ans.push_back(i);
    string s;
    cin>>s;
    if(s[0]=='0' || s[1]=='0' || s[n]=='0') cout<<"NO\n";
    else{
        cout<<"YES\n";
        rep(i,0,n) if(s[i]=='0') swap(ans[i],ans[i-1]);
        rep(i,0,n) cout<<ans[i]<<" ";
        cout<<"\n";
    }
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