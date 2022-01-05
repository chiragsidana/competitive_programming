#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
void solve()
{
   int n;cin>>n;
    vi v(32,0);
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        for(int j=31;j>=0;j--){
            int kan=t>>j;
            if(kan & 1){
                v[j]++;
            }
        }
    }
    int chirag=0;
    int t=1;
    for(int i=0;i<32;i++){
        if(v[i]>1){
            chirag+=t;
        }
        t=t*2;
    }
    cout<<chirag<<endl;

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