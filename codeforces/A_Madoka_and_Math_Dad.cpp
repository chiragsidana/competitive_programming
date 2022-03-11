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
  int n;cin>>n;
  if(n==1){
      cout<<1<<endl;
      return;
  }  
  if(n==2){
      cout<<2<<endl;
      return;
  }
  vi ans;
  while(n){
      if(n%3!=1){
          ans.push_back(2);
          n-=2;
          if(n>0){
              ans.push_back(1);
              n--;
          }
      }
      else{
          ans.push_back(1);
          n--;
          if(n>0){
              ans.push_back(2);
              n-=2;
          }
      }
  }
  for(auto m:ans){
      cout<<m;
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