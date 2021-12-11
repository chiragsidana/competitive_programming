#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;cin>>n;
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    if(n==2){
        cout<<"2"<<" "<<"3"<<endl;
        return;

    }
    cout<<"2"<<" "<<"3"<<" ";
    int m=3;
    for(int i=2;i<n;i++){
        cout<<m+1<<" ";
        m++;
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