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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=1;
    if(v[0]==0 and v[1]==0){
        cout<<-1<<endl;
        return;
    }
    if(v[0]==1){
        ans++;
    }
    
    for(int i=1;i<n;i++){
        
            if(v[i]==0 and v[i-1]==0){
                cout<<-1<<endl;
                return;
            }
            if(v[i]==1 and v[i-1]==1 ){
                ans+=5;
            }
            if(v[i]==1 and v[i-1]==0){
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