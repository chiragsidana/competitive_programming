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
   int n,h;cin>>n>>h;
   vi a(n);
   rep(i,0,n){
       cin>>a[i];
   } 
  
   sort(all(a));
   reverse(all(a));
   if(h<=a[0]){
       cout<<1<<endl;
   }
   else{
        int count=0;
        count+=2*(h/(a[0]+a[1]));
        if(h%(a[0]+a[1])==0)count+=0;
        else if((h%(a[0]+a[1]))<=a[0])count++;
        else count+=2;
        cout<<count<<endl;
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