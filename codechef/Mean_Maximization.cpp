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
    int n;cin>>n;
    vector<float> v(n);
    double sum=0;
    rep(i,0,n){
        cin>>v[i];
        sum+=v[i];
        
    }
    // cout<<sum<<endl;
    sort(v.begin(),v.end());
    sum-=v[n-1];
    // cout<<sum<<endl;
    double ans=sum/(n-1);
    // cout<<ans<<endl;
    ans+=v[n-1];
    cout<<setprecision(6)<<fixed<<ans<<endl;
    

    
    
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