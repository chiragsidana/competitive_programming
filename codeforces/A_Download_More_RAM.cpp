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
using namespace std;
const int N=1e3+2;
void solve()
{
    int n,k;
    cin>>n>>k;
    vpi v;
    int a[n],b[n];
    rep(i,0,n){
       cin>>a[i];
    }
    rep(i,0,n){
       cin>>b[i];
    }
    rep(i,0,n){
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    // rep(i,0,n){
    //     cout<<v[i].ff<<" "<<v[i].ss<<endl;
    // }
    rep(i,0,n){
        if(k>=v[i].ff){
            k+=v[i].ss;
        }
        else{
            break;
        }
    }
    cout<<k<<endl;
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