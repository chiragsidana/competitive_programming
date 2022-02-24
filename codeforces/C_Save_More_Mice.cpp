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
    // vi x(n,0);
    // rep(i,0,k){
    //     int temp;
    //     cin>>temp;
    //     x[temp]++;
    // }
    // // rep(i,0,n){
    // //     cout<<x[i]<<" ";
    // // }
    // int c=0;
    // int ans=0;
    // // for(int i=n-1;i>c;i--){
    // //     while(x[i]>=0){
    // //         if(x[i]>0){
    // //         ans++;
           
    // //         }
    // //         x[i]--;
    // //         c+=n-i;
    // //         cout<<c<<endl;
    // //     }
        
    // // }
    // for(int i=n-1;i>c;i--){
    //     if(x[i]>0){
    //     while(x[i]>0){
    //         ans++;
    //         x[i]--;
    //         c+=n-i;
    //         if(c>=i)break;
    //     }
    //     }
    //     else{
    //         c+=n-i;
    //     }
        
    // }
    // cout<<ans<<endl;
    vi x(k);
    rep(i,0,k)cin>>x[i];
    sort(x.rbegin(),x.rend());
    int ans=0;
    int sum=0;
    while(ans<x.size() and sum+n-x[ans]<n){
        sum+=n-x[ans++];
    }
    cout<<ans<<endl;
    
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