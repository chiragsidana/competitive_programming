#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    vector<int> v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    if(v[0]+v[1]+v[2]==v[6]){
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" ";
        cout<<endl;
        return;
    }
 if(v[0]+v[1]+v[3]==v[6]){
        cout<<v[0]<<" "<<v[1]<<" "<<v[3]<<" ";
        cout<<endl;
        return;
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