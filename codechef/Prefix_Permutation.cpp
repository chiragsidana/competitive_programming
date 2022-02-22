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
    int n,k;cin>>n>>k;
    vi a(k);
    rep(i,0,k){
        cin>>a[i];
    }
    sort(all(a));
    vi b(n);
    rep(i,0,n){
        b[i]=i+1;
    }
    int last= 0;
    rep(i,0,k){
        for(int j=a[i];j>last;j--){
            cout<<b[j-1]<<" ";
        }
        last = a[i];
    }cout<<endl;

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