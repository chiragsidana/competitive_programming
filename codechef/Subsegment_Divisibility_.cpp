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
    // int sum=1;
    // vi ans(n);
    // ans[0]=1;
    // rep(i,1,n){
        
    //     if(((sum+1)%(i+1))==0){
    //         ans[i]=(sum+1);
    //         sum+=ans[i];
    //     }
    //     else{ 
    //         ans[i]=sum+2;
    //         sum+=ans[i];
    //     }
        
    // }
    // rep(i,0,n){
    //     cout<<ans[i]<<" ";
    // }cout<<endl;
    int x=2;
    int y=3;
    rep(i,0,n){
        cout<<x<<" ";
        if(i&1){
            x+=3;
        }
        else{
            x++;
        }
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