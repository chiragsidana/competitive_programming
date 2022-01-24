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
    int n;
  cin>>n;
  priority_queue<pair<int, int>>pq;
  for(int i=1; i<=n;i++) {
    int x;
    cin>>x;
    if(x>0) pq.push({x, i});
  }
  vector<pair<int, int>>ans;
  while (pq.size()>1) {
    auto f= pq.top();
    pq.pop();
    auto s= pq.top();
    pq.pop();
    ans.push_back({f.second,s.second});
    f.first--;
    s.first--;
    if (f.first) pq.push(f);
    if (s.first) pq.push(s);
  }
  cout<<ans.size()<<'\n';
  for(auto i : ans) cout<<i.first<<" "<<i.second<<endl;
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