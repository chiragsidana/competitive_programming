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
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double ans=0;
    if(y1==y2 and y1!=0 and y3<y1){
        ans=abs(x2-x1);
        cout<<fixed<<setprecision(10)<<ans<<endl;
        return;
    }
    else if(y2==y3 and y2!=0 and y1<y2){
        ans=abs(x2-x3);
      cout<<fixed<<setprecision(10)<<ans<<endl;
        return;
    }
    else if(y1==y3 and y3!=0 and y2<y1){
        ans=abs(x1-x3);
        cout<<fixed<<setprecision(10)<<ans<<endl;
        return;
    }
    else cout<<fixed<<setprecision(10)<<ans<<endl;
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