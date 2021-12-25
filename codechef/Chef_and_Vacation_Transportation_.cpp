#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y==z){
        cout<<"EQUAL"<<endl;
        return;
    }
    else if(x+y<z){
        cout<<"PLANEBUS"<<endl;
        return;
    }
    else{
        cout<<"TRAIN"<<endl;
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