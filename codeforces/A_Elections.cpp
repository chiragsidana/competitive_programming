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
    int a,b,c;cin>>a>>b>>c;
    int m=max(a,max(b,c));
    // if(m==a){
    //     cout<<m-a<<" ";
        
    // }
    // else{
    //     cout<<m-a+1<<" ";
    // }
    // if(m==b){
    //         cout<<m-b<<" ";
    //     }
    // else{
    //         cout<<m-b+1<<" ";
    //     }

    // if(m==c){
    //         cout<<m-c<<" "<<endl;
    //     }
    // else{
    //         cout<<m-c+1<<" "<<endl;
    //     }
    cout<<max(0LL,max(b,c)+1-a)<<" "<<max(0LL,max(a,c)+1-b)<<" "<<max(0LL,max(a,b)+1-c)<<endl;
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