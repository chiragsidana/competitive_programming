#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   } 
   string s;
   cin>>s;
   vector<pair<int,int>> v1;
   vector<pair<int,int>> v0;
   for(int i=0;i<n;i++){
       if(s[i]=='0'){
           v0.push_back({v[i],i});
       }
       else{
           v1.push_back({v[i],i});
       }
   }
   sort(v1.begin(),v1.end());
   sort(v0.begin(),v0.end());
   int nr=1;
   int v0size=v0.size();
   int v1size=v1.size();
   for(int i=0;i<v0size;i++){
       v[v0[i].second]=nr++;
   }
   for(int i=0;i<v1size;i++){
       v[v1[i].second]=nr++;
   }
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
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