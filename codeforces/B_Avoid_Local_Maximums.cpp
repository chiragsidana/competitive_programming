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
    rep(i,0,n){
        cin>>a[i];
    }
    vi b(n,0);
    int count=0;
    rep(i,1,n-1){

        if(a[i]>a[i-1] and a[i]>a[i+1]){
            if(b[i-1]==1){
                a[i-1]=a[i];
            }
            else{
                a[i+1]=a[i];
                b[i+1]=1;
                count++;
            }
        }
    }
    cout<<count<<endl;
    rep(i,0,n){
        cout<<a[i]<<" ";
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