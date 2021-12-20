#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
  string s;
  cin>>s;
  int n=s.length();
  if(n%2!=0){
      cout<<"NO"<<endl;
      return;
  }  
  for(int i=0;i<n/2;i++){
      if(s[i]!=s[i+(n/2)]){
          cout<<"NO"<<endl;
          return;
      }
  }
  cout<<"YES"<<endl;
  return;
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