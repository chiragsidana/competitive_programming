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
    if(n<3){
        cout<<"0"<<endl;
        return;
    }
    if(n==3){
        cout<<"10"<<endl;
        return;
    }
    int chirag=pow(3,(n-3))*8*(n-2);
    chirag+=chirag/4;
    cout<<chirag<<endl;
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