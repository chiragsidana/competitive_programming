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
    vi a(n);
    long long mn=LLONG_MAX;
    bool ok=true;
    rep(i,0,n){
        cin>>a[i];mn=min(mn,a[i]);
        if(i!=0){
            if(a[i]!=a[i-1])ok=false;
        }
    }
    if(ok){
        cout<<-1<<endl;
    }
    else{
        rep(i,0,n){
            a[i]=a[i]-mn;
        }
    
    int ans=a[0];
    rep(i,0,n){
        if(i==0)continue;
        ans=__gcd(ans,a[i]);
    }
    cout<<ans<<endl;
    }
    
    // set<int> s;
    // rep(i,0,n){
    //     cin>>a[i];
    //     s.insert(a[i]);
    // }
    // int x=*s.begin();
    // s.erase(s.begin());
    // int y=*s.begin();
    // cout<<abs(x-y)<<endl;
    
    // cout<<abs(a[0]=a[1])<<endl;
    // int dif=INT_MAX;
    // rep(i,0,n-1){
    //     dif=min(dif,a[i]-a[i+1]);
    // }
    // cout<<dif<<endl;
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
