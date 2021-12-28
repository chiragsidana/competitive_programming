#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n,m,ri,ci,rd,cd;
    cin>>n>>m>>ri>>ci>>rd>>cd;
    int t=0;
    int dr=1;
    int dc=1;
    while(ri!=rd and ci!=cd){
        if(ri==n){
            dr=-dr;
        }
        if(ci==m){
            dc=-dc;
        }
        ri+=dr;
        ci+=dc;
       
        t++;
    }
    cout<<t<<endl;
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