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
   unordered_map<int,int> m;
   int ele;
   for(int i=1;i<=n;i++){
       cin>>ele;
       m[ele]++;
   }
   int ans=1;
   for(auto i:m){
       ans=ans*(i.second+1);
       ans=ans%MOD;
   }
   cout<<ans-1<<endl;
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