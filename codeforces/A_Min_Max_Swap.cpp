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
    vi a(n),b(n);
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        cin>>b[i];
    }
    // int idxa=*max_element(a.begin(),a.end());
    // int idxb=*max_element(b.begin(),b.end());
    // int ans=INT_MAX;
    // if(idxa>=idxb){
        
    //     rep(i,0,n){
    //         if(a[i]==idxa){
    //             ans=min(ans,a[i]*b[i]);
    //         }
    //     }
        
    // }
    // if(idxb>=idxa){
    //     rep(i,0,n){
    //         if(b[i]==idxb){
    //             ans=min(ans,b[i]*a[i]);
    //         }
    //     }
    // }
    // cout<<ans<<endl;

    rep(i,0,n){
        if(b[i]>a[i]){
            swap(b[i],a[i]);
        }
    }
    cout<<(*max_element(a.begin(),a.end()))*(*max_element(b.begin(),b.end()))<<endl;
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