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

    int a,b,c;
   for(int i=2;i<n;i++){
       b=i;
       a=n-i-1;
       c=1;
       if(__gcd(a,b)==1){
           cout<<a<<" "<<b<<" "<<c<<endl;
           return;
       }
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