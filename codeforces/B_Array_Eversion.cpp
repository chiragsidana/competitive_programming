#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    vector<int> vc(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        vc[i]=v[i];
    }
    int ans=0;
    int bigelement=v[n-1];
    for(int i=n-1;i>=0;i--){
        if(v[i]>bigelement){
            bigelement=v[i];
            ans++;
        }
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
