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
    int l,r,k;cin>>l>>r>>k;
    int wakanda=r/2;
    int sukriti=(l-1)/2;
    int totla=wakanda-sukriti;
    int landu=(r-l+1)-totla;
    if(l==r and l!=1){
        cout<<"YES"<<endl;
    }
    else{
        if(landu<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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