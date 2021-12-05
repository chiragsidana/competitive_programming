#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    sort(v.begin(),v.end());
    if(v[0]+v[n-1]<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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