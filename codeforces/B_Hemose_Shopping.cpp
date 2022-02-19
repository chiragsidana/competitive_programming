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
    vi a(n),b(n);
    rep(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(all(b));
    int f=1;
    rep(i,n-x,x){
        if(b[i]!=a[i]){
             f=0;
        }
    }
    if(f==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // f?cout<<"YES"<<endl:cout<<"NO"<<endl;
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