#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    int x1=(n+1)/2;
    int y1=(n+1)/2;
    int count=abs(x-x1)+abs(y-y1);
    if(count%2==0){
        cout<<"0"<<endl;
    }
    else cout<<"1"<<endl;
    
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