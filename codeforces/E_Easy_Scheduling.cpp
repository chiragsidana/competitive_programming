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
  int h,p;cin>>h>>p;
  int nodes=pow(2,h)-1;
  vi v;
  int sum=0;
  rep(i,0,h){
      v.push_back(pow(2,i));
  }
      int premoves=0;
      rep(i,0,h){
          if(p<v[i])break;
          else{
              premoves++;
              sum+=v[i];
          }
      }
      nodes-=sum;
      int steps=nodes/p;
      if(nodes%p)steps++;
      cout<<premoves+steps<<endl;

  
    
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